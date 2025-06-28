/********************************************************************************
** Form generated from reading UI file 'client.ui'
**
** Created by: Qt User Interface Compiler version 6.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CLIENT_H
#define UI_CLIENT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenu>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TextBrowser
{
public:
    QWidget *centralwidget;
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QLineEdit *lineEditIP;
    QPushButton *pushButtonSend;
    QLineEdit *lineEditMessage;
    QLineEdit *lineEditName;
    QPushButton *pushButtonConnect;
    QTextBrowser *textBrowserMesseges;
    QPushButton *emojiButton;
    QMenuBar *menubar;
    QMenu *menuOptions;
    QMenu *menuChats;

    void setupUi(QMainWindow *TextBrowser)
    {
        if (TextBrowser->objectName().isEmpty())
            TextBrowser->setObjectName("TextBrowser");
        TextBrowser->setEnabled(true);
        TextBrowser->resize(519, 502);
        QFont font;
        font.setFamilies({QString::fromUtf8("Impact")});
        font.setPointSize(11);
        TextBrowser->setFont(font);
        QIcon icon(QIcon::fromTheme(QIcon::ThemeIcon::DocumentSend));
        TextBrowser->setWindowIcon(icon);
        TextBrowser->setStyleSheet(QString::fromUtf8("QMainWindow {\n"
"	background-color: rgb(240, 240, 240);\n"
"}"));
        TextBrowser->setIconSize(QSize(0, 0));
        centralwidget = new QWidget(TextBrowser);
        centralwidget->setObjectName("centralwidget");
        QFont font1;
        font1.setPointSize(11);
        centralwidget->setFont(font1);
        centralwidget->setStyleSheet(QString::fromUtf8(""));
        horizontalLayout = new QHBoxLayout(centralwidget);
        horizontalLayout->setObjectName("horizontalLayout");
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName("groupBox");
        QFont font2;
        font2.setPointSize(10);
        groupBox->setFont(font2);
        groupBox->setStyleSheet(QString::fromUtf8("QGroupBox {\n"
"	border-radius: 5px;                          \n"
"	border: 15 px solid red;\n"
"	background-color :rgba(220, 220, 220, 200);\n"
"}"));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName("gridLayout");
        lineEditIP = new QLineEdit(groupBox);
        lineEditIP->setObjectName("lineEditIP");
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Arial")});
        font3.setPointSize(11);
        lineEditIP->setFont(font3);
        lineEditIP->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);\n"
"border-radius: 5px;                         \n"
"border: 1px solid #000000;\n"
"background-color :rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(lineEditIP, 0, 1, 1, 1);

        pushButtonSend = new QPushButton(groupBox);
        pushButtonSend->setObjectName("pushButtonSend");
        pushButtonSend->setMinimumSize(QSize(60, 21));
        pushButtonSend->setFont(font3);
        pushButtonSend->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);\n"
"border-radius: 5px;                         \n"
"border: 1px solid #000000;\n"
"background-color :rgb(255, 255, 255);\n"
""));
        QIcon icon1(QIcon::fromTheme(QIcon::ThemeIcon::MailForward));
        pushButtonSend->setIcon(icon1);

        gridLayout->addWidget(pushButtonSend, 2, 4, 1, 1);

        lineEditMessage = new QLineEdit(groupBox);
        lineEditMessage->setObjectName("lineEditMessage");
        lineEditMessage->setFont(font3);
        lineEditMessage->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);\n"
"border-radius: 5px;                         \n"
"border: 1px solid #000000;\n"
"background-color :rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(lineEditMessage, 2, 0, 1, 3);

        lineEditName = new QLineEdit(groupBox);
        lineEditName->setObjectName("lineEditName");
        lineEditName->setFont(font3);
        lineEditName->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);\n"
"border-radius: 5px;                         \n"
"border: 1px solid #000000;\n"
"background-color :rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(lineEditName, 0, 0, 1, 1);

        pushButtonConnect = new QPushButton(groupBox);
        pushButtonConnect->setObjectName("pushButtonConnect");
        pushButtonConnect->setFont(font3);
        pushButtonConnect->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);\n"
"border-radius: 5px;                         \n"
"border: 1px solid #000000;\n"
"background-color :rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(pushButtonConnect, 0, 2, 1, 3);

        textBrowserMesseges = new QTextBrowser(groupBox);
        textBrowserMesseges->setObjectName("textBrowserMesseges");
        textBrowserMesseges->setFont(font3);
        textBrowserMesseges->setStyleSheet(QString::fromUtf8("color: rgb(0,0, 0);\n"
"border-radius: 5px;                         \n"
"border: 1px solid #000000;\n"
"background-color :rgb(255, 255, 255);\n"
""));

        gridLayout->addWidget(textBrowserMesseges, 1, 0, 1, 5);

        emojiButton = new QPushButton(groupBox);
        emojiButton->setObjectName("emojiButton");
        QSizePolicy sizePolicy(QSizePolicy::Policy::Fixed, QSizePolicy::Policy::Fixed);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(emojiButton->sizePolicy().hasHeightForWidth());
        emojiButton->setSizePolicy(sizePolicy);
        emojiButton->setMinimumSize(QSize(0, 21));
        emojiButton->setMaximumSize(QSize(30, 30));
        emojiButton->setFont(font1);
        emojiButton->setStyleSheet(QString::fromUtf8("border: 0px;"));

        gridLayout->addWidget(emojiButton, 2, 3, 1, 1);


        horizontalLayout->addWidget(groupBox);

        TextBrowser->setCentralWidget(centralwidget);
        menubar = new QMenuBar(TextBrowser);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 519, 25));
        menubar->setFont(font1);
        menubar->setStyleSheet(QString::fromUtf8("QMenuBar {\n"
"	border-radius: 5px;                          \n"
"	border: 15 px solid red;\n"
"	background-color :rgba(220, 220, 220, 200);\n"
"}"));
        menuOptions = new QMenu(menubar);
        menuOptions->setObjectName("menuOptions");
        menuOptions->setFont(font1);
        menuChats = new QMenu(menubar);
        menuChats->setObjectName("menuChats");
        menuChats->setFont(font1);
        TextBrowser->setMenuBar(menubar);

        menubar->addAction(menuOptions->menuAction());
        menubar->addAction(menuChats->menuAction());

        retranslateUi(TextBrowser);

        QMetaObject::connectSlotsByName(TextBrowser);
    } // setupUi

    void retranslateUi(QMainWindow *TextBrowser)
    {
        TextBrowser->setWindowTitle(QString());
        groupBox->setTitle(QString());
        lineEditIP->setPlaceholderText(QCoreApplication::translate("TextBrowser", "Enter IP", nullptr));
        pushButtonSend->setText(QString());
        lineEditMessage->setPlaceholderText(QCoreApplication::translate("TextBrowser", "Message", nullptr));
        lineEditName->setPlaceholderText(QCoreApplication::translate("TextBrowser", "Enter Your Name", nullptr));
        pushButtonConnect->setText(QCoreApplication::translate("TextBrowser", "Connect", nullptr));
        emojiButton->setText(QCoreApplication::translate("TextBrowser", "\360\237\230\200", nullptr));
        menuOptions->setTitle(QCoreApplication::translate("TextBrowser", "Options", nullptr));
        menuChats->setTitle(QCoreApplication::translate("TextBrowser", "Chats", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TextBrowser: public Ui_TextBrowser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CLIENT_H
