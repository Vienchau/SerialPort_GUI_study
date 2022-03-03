#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSerialPort>
#include <QSerialPortInfo>
#include <QTimer>
#include <QScrollBar>


uint8_t bSTX[] = {0x02};

uint8_t bMOVL[] = {0x4D, 0x4F, 0x56, 0x4C};
uint8_t bGPOS[] = {0x47, 0x50, 0x4F, 0x53};
uint8_t bGVEL[] = {0x47, 0x56, 0x45, 0x4C};
uint8_t bSTT[] = {0x47, 0x53, 0x54, 0x54};

uint8_t bOPT[] ={0x00, 0x00, 0x00};
uint8_t bDATA[] = {0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01};

uint8_t bSYNC[] ={0x16};
uint8_t bACK[] ={0x06};

uint8_t bEXT[] = {0x03};

uint8_t bProtocolDataBuffer[18] = {};
uint8_t bProtocolData[8] ={};



MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Serial");

    mSerial = new QSerialPort(this);
    updateSerialPort();

    ui->baudComboBox->addItem(QStringLiteral("9600"), QSerialPort::Baud9600);
    ui->baudComboBox->addItem(QStringLiteral("19200"), QSerialPort::Baud19200);
    ui->baudComboBox->addItem(QStringLiteral("38400"), QSerialPort::Baud38400);
    ui->baudComboBox->addItem(QStringLiteral("115200"), QSerialPort::Baud115200);

    ui->sizeComboBox->addItem(QStringLiteral("5"), QSerialPort::Data5);
    ui->sizeComboBox->addItem(QStringLiteral("6"), QSerialPort::Data6);
    ui->sizeComboBox->addItem(QStringLiteral("7"), QSerialPort::Data7);
    ui->sizeComboBox->addItem(QStringLiteral("8"), QSerialPort::Data8);


    QStringList parity = {"none"};
    ui -> parityComboBox -> addItems(parity);


    mSerialScanTimer = new QTimer(this);
    mSerialScanTimer->setInterval(5000);
    mSerialScanTimer->start();

    connect(mSerialScanTimer, &QTimer::timeout, this, &MainWindow::updateSerialPort);
    connect(ui->lineEdit, &QLineEdit::returnPressed,this, &MainWindow::on_sendButton_clicked);
    connect(mSerial, &QSerialPort::readyRead, this, &MainWindow::serialport_read);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_sttButton_clicked()
{
        QByteArray str("02 47 53 54 54 00 00 00 00 00 00 00 00 01 00 01 16 03");
        QByteArray t = str.replace(" ", "");
        QByteArray bytes = QByteArray::fromHex(t);
        mSerial->write(bytes);
}


void MainWindow::on_movButton_clicked()
{
        QByteArray str("02 4D 4F 56 4C 00 00 00 00 00 00 00 00 01 00 01 16 03");
        QByteArray t = str.replace(" ", "");
        QByteArray bytes = QByteArray::fromHex(t);
        mSerial->write(bytes);
}


void MainWindow::on_velButton_clicked()
{
        QByteArray str("02 47 56 45 4C 00 00 00 00 00 00 00 00 01 00 01 16 03");
        QByteArray t = str.replace(" ", "");
        QByteArray bytes = QByteArray::fromHex(t);
        mSerial->write(bytes);
}


void MainWindow::on_posButton_clicked()
{
        QByteArray str("02 47 50 4F 53 00 00 00 00 00 00 00 00 01 00 01 16 03");
        QByteArray t = str.replace(" ", "");
        QByteArray bytes = QByteArray::fromHex(t);
        mSerial->write(bytes);
}



void MainWindow::updateSerialPort()
{
    mSerialPorts = QSerialPortInfo::availablePorts();
    ui->serialComboBox->clear();
    for(const QSerialPortInfo &port: mSerialPorts)
    {
        ui -> serialComboBox -> addItem(port.portName(),  port.systemLocation());
    }

}



void MainWindow::on_openButton_clicked()
{
    ui->openButton->setEnabled(false);
    QString serialLoc  =  ui->serialComboBox->currentData().toString();
    if (mSerial->isOpen()) {
        QString text = "Serial already connected, disconnecting!\n";
        ui->textBrowser->insertPlainText(text);
        mSerial->close();
    }

    mSerial->setPortName(serialLoc);
    mSerial->setBaudRate(static_cast<QSerialPort::BaudRate>(ui->baudComboBox->itemData(ui->baudComboBox->currentIndex()).toInt()));
    mSerial->setDataBits(static_cast<QSerialPort::DataBits>(ui->sizeComboBox->itemData(ui->sizeComboBox->currentIndex()).toInt()));

    mSerial->setParity(QSerialPort::NoParity);
    mSerial->setStopBits(QSerialPort::OneStop);
    mSerial->setFlowControl(QSerialPort::NoFlowControl);

    if(mSerial->open(QIODevice::ReadWrite)) {

        QString text = "SERIAL: OK!\n";
        ui->textBrowser->insertPlainText(text);
    } else {
        QString text = "SERIAL: ERROR!\n";
        ui->textBrowser->insertPlainText(text);
    }

   ui->openButton->setEnabled(true);
}


void MainWindow::on_sendButton_clicked()
{
    if(mSerial-> isOpen())
    {
        QString str = ui -> lineEdit->text();
        ui->lineEdit->clear();
        str.append("\r\n");
        mSerial -> write(str.toLocal8Bit());
    }
    else
    {
        QString text = "Transmit mission failed!\n";
        ui->textBrowser->insertPlainText(text);
    }
}

void MainWindow::serialport_read()
{
    QByteArray data_rev = mSerial -> readAll();
    QString str = QString(data_rev);
    ui -> textBrowser -> insertPlainText(str);
    QScrollBar *sb = ui->textBrowser->verticalScrollBar();
    sb->setValue(sb->maximum());
}
