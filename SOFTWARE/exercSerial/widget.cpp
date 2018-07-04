#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);

    /* Create Object the Class QSerialPort*/
    devserial = new QSerialPort(this);

    /* Create Object the Class comserial to manipulate read/write of the my way */
    procSerial = new comserial(devserial);

    /* Load Device PortSerial available */
    QStringList DispSeriais = procSerial->CarregarDispositivos();

    /* Inserting in ComboxBox the Devices */
    ui->cbDevice->addItems(DispSeriais);

    /* Enable PushButton "Conectar" if any port is found.
     * If an error occurs, it is reported in the Log
     */
    if(DispSeriais.length() > 0) {
        ui->pbOpenSerial->setEnabled(true);
        ui->txtLog->append("### Porta serial pronta para ser utilizada.");
    }
    else { ui->txtLog->append("### Nenhuma porta serial foi detectada!"); }


    /* Connect Objects -> Signal and Slots
     * DevSerial with Read Data Serial
     * TextEdit "teLog" with getData() after send data WriteData() [Not apply here in version 5.X]
     */
    connect(devserial, SIGNAL(readyRead()), this, SLOT(ReadData()));
    this->tempox.resize(100);
    this->sensory.resize(100);
    this->ui->grafico->addGraph();
    this->ui->grafico->xAxis->setLabel("Tempo");
    this->ui->grafico->yAxis->setLabel("Pulso");
    this->ui->grafico->xAxis->setRange(0,75);
    this->ui->grafico->yAxis->setRange(0,valorMAX);
    //this->tempox.pop_front();
    //this->sensory.pop_front();
    this->insertSensor(0);
    this->insertTempo(0);
    this->ui->grafico->graph(0)->setData(tempox,sensory);
    this->ui->grafico->replot();

}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pbCloseSerial_clicked()
{
    bool statusCloseSerial;


    statusCloseSerial = procSerial->Desconectar();

    if (statusCloseSerial) {
        ui->pbCloseSerial->setEnabled(false);
        ui->pbOpenSerial->setEnabled(true);
        ui->txtLog->append("### Porta serial fechada com sucesso!");
    }
    else {
        ui->txtLog->append("### Falha ao fechar conexão serial.");
    }
}

void Widget::on_pbOpenSerial_clicked()
{
    bool statusOpenSerial;

    statusOpenSerial = procSerial->Conectar(ui->cbDevice->currentText(),
                                             ui->cbBaudRate->currentText().toInt()
                                             );
    if (statusOpenSerial) {
        ui->pbCloseSerial->setEnabled(true);
        ui->pbOpenSerial->setEnabled(false);
        ui->txtLog->append("### Porta serial aberta com sucesso!");
    }
    else {
        ui->txtLog->append("Falha ao abrir conexão serial.");
    }
}

void Widget::on_btnVersion_clicked()
{
    QByteArray DADOS("versao\n");
    procSerial->Write(DADOS);
}

void Widget::WriteData(const QByteArray data)
{
    procSerial->Write(data);
}

void Widget::ReadData()
{
    int sensor_ard, tempo_ard;
    QString data = procSerial->Read();
    //qDebug() << "Input: " << data << endl;
    cout << "Dado lido: " << data.toLatin1().toStdString() << endl;
    ui->txtLog->append(data);
    data=data.section('/',0,0);
    tempo_ard=data.section(',',0,0).toInt();
    sensor_ard=data.section(',',1,1).toInt();
    this->insertSensor(sensor_ard);
    this->insertTempo(tempo_ard);
    if(contador_EstouroTempo>=75)
        this->ui->grafico->xAxis->setRange(contador_EstouroTempo,(75+contador_EstouroTempo++));
    this->ui->grafico->graph(0)->setData(tempox,sensory);

    this->ui->grafico->replot();
    contador_EstouroTempo++;

}

void Widget::on_pbSendCmd2_clicked()
{
    QString Cmd = ui->leCmd->text()+"\n";
    //qDebug() << "Output: " << Cmd << endl;
    cout << "OUTPUT: " << Cmd.toStdString() << endl;
    WriteData(Cmd.toUtf8());
}


void Widget::on_btnHw_clicked()
{

}

void Widget::on_btnLEDOn_clicked()
{

}

void Widget::on_pbSendCmd_clicked()
{
    QString Cmd = ui->leCmd->text()+"\n";
    //qDebug() << "Output: " << Cmd << endl;
    cout << "OUTPUT: " << Cmd.toStdString() << endl;
    WriteData(Cmd.toUtf8());
}

void Widget::on_btnLeituraAnalog_clicked()
{

}

void Widget::insertTempo(int value)
{
    double aux=value;
    //this->tempox.pop_front();
    //this->tempox.append(aux);
    this->tempox.pop_back();
    this->tempox.prepend(aux);
}

void Widget::insertSensor(int value)
{
    double aux=value;
    //this->sensory.pop_front();
    this->sensory.pop_back();
    this->sensory.prepend(aux);
    for (int var = 0; var < 100; var++) {
        cout << "sensory: " << sensory[var] << endl;
    }
}




