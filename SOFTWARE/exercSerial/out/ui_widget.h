/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QLineEdit *leCmd;
    QGroupBox *qbConfSerial;
    QWidget *formLayoutWidget;
    QFormLayout *flConfSerial;
    QLabel *lbDevice;
    QComboBox *cbDevice;
    QLabel *lbBaudRate;
    QComboBox *cbBaudRate;
    QComboBox *cbFlow;
    QLabel *label;
    QPushButton *pbOpenSerial;
    QPushButton *pbCloseSerial;
    QPushButton *btnHw;
    QPushButton *btnVersion;
    QWidget *formLayoutWidget_2;
    QFormLayout *formLayout;
    QPushButton *btnLeituraAnalog;
    QTextEdit *txtLog;
    QLabel *label_2;
    QPushButton *pbSendCmd2;
    QPushButton *pbSendCmd;
    QCustomPlot *grafico;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1184, 601);
        leCmd = new QLineEdit(Widget);
        leCmd->setObjectName(QStringLiteral("leCmd"));
        leCmd->setGeometry(QRect(10, 210, 391, 21));
        qbConfSerial = new QGroupBox(Widget);
        qbConfSerial->setObjectName(QStringLiteral("qbConfSerial"));
        qbConfSerial->setGeometry(QRect(10, 10, 231, 171));
        formLayoutWidget = new QWidget(qbConfSerial);
        formLayoutWidget->setObjectName(QStringLiteral("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(0, 20, 211, 151));
        flConfSerial = new QFormLayout(formLayoutWidget);
        flConfSerial->setSpacing(6);
        flConfSerial->setContentsMargins(11, 11, 11, 11);
        flConfSerial->setObjectName(QStringLiteral("flConfSerial"));
        flConfSerial->setFieldGrowthPolicy(QFormLayout::AllNonFixedFieldsGrow);
        flConfSerial->setFormAlignment(Qt::AlignHCenter|Qt::AlignTop);
        flConfSerial->setContentsMargins(0, 0, 0, 0);
        lbDevice = new QLabel(formLayoutWidget);
        lbDevice->setObjectName(QStringLiteral("lbDevice"));

        flConfSerial->setWidget(0, QFormLayout::LabelRole, lbDevice);

        cbDevice = new QComboBox(formLayoutWidget);
        cbDevice->setObjectName(QStringLiteral("cbDevice"));

        flConfSerial->setWidget(0, QFormLayout::FieldRole, cbDevice);

        lbBaudRate = new QLabel(formLayoutWidget);
        lbBaudRate->setObjectName(QStringLiteral("lbBaudRate"));

        flConfSerial->setWidget(1, QFormLayout::LabelRole, lbBaudRate);

        cbBaudRate = new QComboBox(formLayoutWidget);
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->addItem(QString());
        cbBaudRate->setObjectName(QStringLiteral("cbBaudRate"));

        flConfSerial->setWidget(1, QFormLayout::FieldRole, cbBaudRate);

        cbFlow = new QComboBox(formLayoutWidget);
        cbFlow->addItem(QString());
        cbFlow->addItem(QString());
        cbFlow->addItem(QString());
        cbFlow->addItem(QString());
        cbFlow->addItem(QString());
        cbFlow->addItem(QString());
        cbFlow->addItem(QString());
        cbFlow->setObjectName(QStringLiteral("cbFlow"));

        flConfSerial->setWidget(2, QFormLayout::FieldRole, cbFlow);

        label = new QLabel(formLayoutWidget);
        label->setObjectName(QStringLiteral("label"));

        flConfSerial->setWidget(2, QFormLayout::LabelRole, label);

        pbOpenSerial = new QPushButton(formLayoutWidget);
        pbOpenSerial->setObjectName(QStringLiteral("pbOpenSerial"));

        flConfSerial->setWidget(4, QFormLayout::FieldRole, pbOpenSerial);

        pbCloseSerial = new QPushButton(formLayoutWidget);
        pbCloseSerial->setObjectName(QStringLiteral("pbCloseSerial"));

        flConfSerial->setWidget(5, QFormLayout::FieldRole, pbCloseSerial);

        btnHw = new QPushButton(formLayoutWidget);
        btnHw->setObjectName(QStringLiteral("btnHw"));

        flConfSerial->setWidget(4, QFormLayout::LabelRole, btnHw);

        btnVersion = new QPushButton(formLayoutWidget);
        btnVersion->setObjectName(QStringLiteral("btnVersion"));

        flConfSerial->setWidget(5, QFormLayout::LabelRole, btnVersion);

        formLayoutWidget_2 = new QWidget(Widget);
        formLayoutWidget_2->setObjectName(QStringLiteral("formLayoutWidget_2"));
        formLayoutWidget_2->setGeometry(QRect(260, 20, 231, 161));
        formLayout = new QFormLayout(formLayoutWidget_2);
        formLayout->setSpacing(6);
        formLayout->setContentsMargins(11, 11, 11, 11);
        formLayout->setObjectName(QStringLiteral("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        btnLeituraAnalog = new QPushButton(formLayoutWidget_2);
        btnLeituraAnalog->setObjectName(QStringLiteral("btnLeituraAnalog"));

        formLayout->setWidget(0, QFormLayout::SpanningRole, btnLeituraAnalog);

        txtLog = new QTextEdit(Widget);
        txtLog->setObjectName(QStringLiteral("txtLog"));
        txtLog->setGeometry(QRect(10, 240, 481, 351));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(10, 190, 91, 17));
        pbSendCmd2 = new QPushButton(Widget);
        pbSendCmd2->setObjectName(QStringLiteral("pbSendCmd2"));
        pbSendCmd2->setGeometry(QRect(410, 210, 81, 21));
        pbSendCmd = new QPushButton(Widget);
        pbSendCmd->setObjectName(QStringLiteral("pbSendCmd"));
        pbSendCmd->setGeometry(QRect(410, 190, 81, 21));
        grafico = new QCustomPlot(Widget);
        grafico->setObjectName(QStringLiteral("grafico"));
        grafico->setGeometry(QRect(500, 10, 671, 581));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        qbConfSerial->setTitle(QApplication::translate("Widget", "Configura\303\247\303\243o Serial", nullptr));
        lbDevice->setText(QApplication::translate("Widget", "Porta", nullptr));
        lbBaudRate->setText(QApplication::translate("Widget", "BaudRate", nullptr));
        cbBaudRate->setItemText(0, QApplication::translate("Widget", "2400", nullptr));
        cbBaudRate->setItemText(1, QApplication::translate("Widget", "4800", nullptr));
        cbBaudRate->setItemText(2, QApplication::translate("Widget", "9600", nullptr));
        cbBaudRate->setItemText(3, QApplication::translate("Widget", "19200", nullptr));
        cbBaudRate->setItemText(4, QApplication::translate("Widget", "38400", nullptr));
        cbBaudRate->setItemText(5, QApplication::translate("Widget", "57600", nullptr));
        cbBaudRate->setItemText(6, QApplication::translate("Widget", "115200", nullptr));

        cbFlow->setItemText(0, QApplication::translate("Widget", "2400", nullptr));
        cbFlow->setItemText(1, QApplication::translate("Widget", "4800", nullptr));
        cbFlow->setItemText(2, QApplication::translate("Widget", "9600", nullptr));
        cbFlow->setItemText(3, QApplication::translate("Widget", "19200", nullptr));
        cbFlow->setItemText(4, QApplication::translate("Widget", "38400", nullptr));
        cbFlow->setItemText(5, QApplication::translate("Widget", "57600", nullptr));
        cbFlow->setItemText(6, QApplication::translate("Widget", "115200", nullptr));

        label->setText(QApplication::translate("Widget", "Flow Control:", nullptr));
        pbOpenSerial->setText(QApplication::translate("Widget", "Conectar", nullptr));
        pbCloseSerial->setText(QApplication::translate("Widget", "Desconectar", nullptr));
        btnHw->setText(QApplication::translate("Widget", "Hardware", nullptr));
        btnVersion->setText(QApplication::translate("Widget", "Vers\303\243o", nullptr));
        btnLeituraAnalog->setText(QApplication::translate("Widget", "Ler Leitura Analog", nullptr));
        label_2->setText(QApplication::translate("Widget", "Comandos:", nullptr));
        pbSendCmd2->setText(QApplication::translate("Widget", "Send", nullptr));
        pbSendCmd->setText(QApplication::translate("Widget", "Enviar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
