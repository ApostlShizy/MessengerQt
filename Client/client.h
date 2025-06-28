#ifndef CLIENT_H
#define CLIENT_H

#include <QMainWindow>
#include <QTcpSocket>
#include <QTime>

QT_BEGIN_NAMESPACE
namespace Ui { class TextBrowser; }
QT_END_NAMESPACE

class Client : public QMainWindow
{
    Q_OBJECT

public:
    Client(QWidget *parent = nullptr);
    ~Client();

private:
    Ui::TextBrowser *ui;
    QTcpSocket * socket;
    QByteArray Data;
    quint16 nextBlockSize;

    void SendToServer(QString str);
public slots :
    void slotReadyRead();

private slots:
    void on_pushButtonSend_clicked();
    void on_pushButtonConnect_clicked();
};
#endif // CLIENT_H
