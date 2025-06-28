#include "client.h"
#include "ui_client.h"

Client::Client(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::TextBrowser)
{
    ui->setupUi(this);

    socket = new QTcpSocket(this);
    connect(socket, &QTcpSocket::readyRead,this, &Client::slotReadyRead);
    connect(socket,&QTcpSocket::disconnected,socket,&QTcpSocket::deleteLater);
    nextBlockSize = 0;

}

void Client::SendToServer(QString str) {
    Data.clear();
    QDataStream out(&Data,QIODevice::WriteOnly);
    out.setVersion(QDataStream::Qt_6_2);
    out <<quint16(0) << QTime::currentTime() << str;
    out.device()->seek(0);
    out << quint16(Data.size() - sizeof(quint16));
    socket->write(Data);
    ui->lineEditMessage->clear();
}

void Client::slotReadyRead() {

    QDataStream in(socket);
    in.setVersion(QDataStream::Qt_6_2);

    if(in.status()==QDataStream::Ok) {

        for(;;) {

            if(nextBlockSize == 0) {

                if(socket->bytesAvailable() < 2) {
                    break;
                }
                in >> nextBlockSize;
            }

            if(socket->bytesAvailable()< nextBlockSize) {
                break;
            }
            QString str;
            QTime time;
            in >> time >> str;
            nextBlockSize = 0;
            ui->textBrowserMesseges->append("\n" + time.toString() + str);
        }
    }
    else {
        ui->textBrowserMesseges->append("read error");
    }
}

void Client::on_pushButtonSend_clicked() {
    if(!ui->lineEditMessage->text().isEmpty()) {
        SendToServer(ui->lineEditMessage->text());
    }
}


void Client::on_pushButtonConnect_clicked() {
    ui->textBrowserMesseges->clear();

    if(ui->lineEditIP->text().isEmpty() || ui->lineEditName->text().isEmpty()) {
        if((ui->lineEditIP->text().isEmpty())) {
            ui->textBrowserMesseges->append("Not entered ip \n");
        }
        if(ui->lineEditName->text().isEmpty()) {
            ui->textBrowserMesseges->append("Not entered name \n");
        }
    }

    else {
        socket->connectToHost(ui->lineEditIP->text(),2323);

        socket->waitForConnected(30000);

        if(socket->state() == QTcpSocket::ConnectedState) {
            ui->pushButtonConnect->close();
            ui->lineEditIP->close();
            ui->lineEditName->close();
        }
        else {
            ui->textBrowserMesseges->setText("Fail to connect");
        }
    }
}


Client::~Client() {
    delete ui;
}
