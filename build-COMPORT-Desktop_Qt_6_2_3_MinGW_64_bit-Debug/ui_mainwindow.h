/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.2.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTextBrowser *textBrowser;
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QPushButton *sendButton;
    QGroupBox *groupBox_2;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QPushButton *sttButton;
    QPushButton *velButton;
    QVBoxLayout *verticalLayout_3;
    QPushButton *movButton;
    QPushButton *posButton;
    QWidget *layoutWidget1;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label;
    QComboBox *serialComboBox;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *baudComboBox;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_3;
    QComboBox *sizeComboBox;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_4;
    QComboBox *parityComboBox;
    QPushButton *openButton;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(737, 509);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        textBrowser = new QTextBrowser(centralwidget);
        textBrowser->setObjectName(QString::fromUtf8("textBrowser"));
        textBrowser->setGeometry(QRect(320, 50, 401, 331));
        groupBox = new QGroupBox(centralwidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(310, 30, 421, 361));
        lineEdit = new QLineEdit(centralwidget);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(30, 370, 231, 31));
        sendButton = new QPushButton(centralwidget);
        sendButton->setObjectName(QString::fromUtf8("sendButton"));
        sendButton->setGeometry(QRect(30, 410, 101, 31));
        groupBox_2 = new QGroupBox(centralwidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(20, 350, 251, 101));
        layoutWidget = new QWidget(centralwidget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 280, 231, 61));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        sttButton = new QPushButton(layoutWidget);
        sttButton->setObjectName(QString::fromUtf8("sttButton"));

        verticalLayout_2->addWidget(sttButton);

        velButton = new QPushButton(layoutWidget);
        velButton->setObjectName(QString::fromUtf8("velButton"));

        verticalLayout_2->addWidget(velButton);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout_3 = new QVBoxLayout();
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        movButton = new QPushButton(layoutWidget);
        movButton->setObjectName(QString::fromUtf8("movButton"));

        verticalLayout_3->addWidget(movButton);

        posButton = new QPushButton(layoutWidget);
        posButton->setObjectName(QString::fromUtf8("posButton"));

        verticalLayout_3->addWidget(posButton);


        horizontalLayout->addLayout(verticalLayout_3);

        layoutWidget1 = new QWidget(centralwidget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(31, 41, 231, 161));
        verticalLayout = new QVBoxLayout(layoutWidget1);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        label = new QLabel(layoutWidget1);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_2->addWidget(label);

        serialComboBox = new QComboBox(layoutWidget1);
        serialComboBox->setObjectName(QString::fromUtf8("serialComboBox"));

        horizontalLayout_2->addWidget(serialComboBox);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        label_5 = new QLabel(layoutWidget1);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        horizontalLayout_3->addWidget(label_5);

        baudComboBox = new QComboBox(layoutWidget1);
        baudComboBox->setObjectName(QString::fromUtf8("baudComboBox"));

        horizontalLayout_3->addWidget(baudComboBox);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_3 = new QLabel(layoutWidget1);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_4->addWidget(label_3);

        sizeComboBox = new QComboBox(layoutWidget1);
        sizeComboBox->setObjectName(QString::fromUtf8("sizeComboBox"));

        horizontalLayout_4->addWidget(sizeComboBox);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        horizontalLayout_5->addWidget(label_4);

        parityComboBox = new QComboBox(layoutWidget1);
        parityComboBox->setObjectName(QString::fromUtf8("parityComboBox"));

        horizontalLayout_5->addWidget(parityComboBox);


        verticalLayout->addLayout(horizontalLayout_5);

        openButton = new QPushButton(centralwidget);
        openButton->setObjectName(QString::fromUtf8("openButton"));
        openButton->setGeometry(QRect(50, 220, 201, 31));
        MainWindow->setCentralWidget(centralwidget);
        groupBox->raise();
        groupBox_2->raise();
        textBrowser->raise();
        lineEdit->raise();
        sendButton->raise();
        layoutWidget->raise();
        layoutWidget->raise();
        openButton->raise();
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 737, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "Recieved Data", nullptr));
        sendButton->setText(QCoreApplication::translate("MainWindow", "Send", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Send Data", nullptr));
        sttButton->setText(QCoreApplication::translate("MainWindow", "STATUS", nullptr));
        velButton->setText(QCoreApplication::translate("MainWindow", "VELOCITY", nullptr));
        movButton->setText(QCoreApplication::translate("MainWindow", "MOVEL", nullptr));
        posButton->setText(QCoreApplication::translate("MainWindow", "POSITION", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "COM", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "BaudRate", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Data Size", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Parity", nullptr));
        openButton->setText(QCoreApplication::translate("MainWindow", "Open", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
