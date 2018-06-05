#ifndef WIDGET_H
#define WIDGET_H
#include <iostream>
#include <QWidget>
#include "comserial.h"
#include <QVector>
#include "qcustomplot.h"
#include <QRandomGenerator>

#define valorMAX 100

using namespace std;
namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private:
    Ui::Widget *ui;

    QVector<double> tempox, sensory;
    QSerialPort *devserial;
    comserial *procSerial;
    int contador_EstouroTempo=0;
    void CarregarInfoDispSerial(void);

private slots:
    void on_pbCloseSerial_clicked();
    void on_pbOpenSerial_clicked();
    void on_pbSendCmd_clicked();

    void WriteData(const QByteArray data);
    void ReadData();
    void on_btnVersion_clicked();
    void on_pbSendCmd2_clicked();

    void on_btnHw_clicked();
    void on_btnLEDOn_clicked();
    void on_btnLeituraAnalog_clicked();
    void on_btnLEDOn_2_clicked();
    void insertTempo(int value);
    void insertSensor(int value);
    void on_btn_Teste_clicked();
    void on_pushButton_clicked();
};

#endif // WIDGET_H
