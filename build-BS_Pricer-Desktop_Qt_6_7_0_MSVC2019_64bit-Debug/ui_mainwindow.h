/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.7.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *actionAbout;
    QWidget *centralWidget;
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout_2;
    QGridLayout *gridLayout_3;
    QLabel *label;
    QLabel *label_10;
    QLineEdit *out_theta;
    QLineEdit *out_vega;
    QLabel *label_16;
    QLineEdit *out_status;
    QLabel *label_12;
    QLabel *label_13;
    QLineEdit *out_gamma;
    QLabel *label_11;
    QLineEdit *out_fair;
    QLabel *label_9;
    QLineEdit *out_rho;
    QLineEdit *out_delta;
    QSpacerItem *verticalSpacer_2;
    QHBoxLayout *horizontalLayout;
    QFormLayout *formLayout;
    QLabel *label_2;
    QDoubleSpinBox *inp_spot;
    QLabel *label_3;
    QDoubleSpinBox *inp_strike;
    QLabel *label_8;
    QDoubleSpinBox *inp_maturity;
    QLabel *label_4;
    QDoubleSpinBox *inp_vol;
    QLabel *label_6;
    QDoubleSpinBox *inp_intrate;
    QLabel *label_5;
    QDoubleSpinBox *inp_div;
    QLabel *label_7;
    QComboBox *inp_type;
    QPushButton *btn_calc;
    QSpacerItem *horizontalSpacer;
    QFrame *line;
    QLabel *label_14;
    QLabel *label_15;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(400, 350);
        MainWindow->setMinimumSize(QSize(400, 350));
        MainWindow->setMaximumSize(QSize(400, 350));
        actionAbout = new QAction(MainWindow);
        actionAbout->setObjectName("actionAbout");
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName("centralWidget");
        gridLayoutWidget = new QWidget(centralWidget);
        gridLayoutWidget->setObjectName("gridLayoutWidget");
        gridLayoutWidget->setGeometry(QRect(10, 10, 457, 322));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setSpacing(10);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName("gridLayout");
        gridLayout->setContentsMargins(0, 0, 0, 0);
        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName("horizontalLayout_2");
        gridLayout_3 = new QGridLayout();
        gridLayout_3->setSpacing(6);
        gridLayout_3->setObjectName("gridLayout_3");
        label = new QLabel(gridLayoutWidget);
        label->setObjectName("label");

        gridLayout_3->addWidget(label, 1, 0, 1, 1);

        label_10 = new QLabel(gridLayoutWidget);
        label_10->setObjectName("label_10");

        gridLayout_3->addWidget(label_10, 3, 0, 1, 1);

        out_theta = new QLineEdit(gridLayoutWidget);
        out_theta->setObjectName("out_theta");
        out_theta->setReadOnly(true);

        gridLayout_3->addWidget(out_theta, 5, 1, 1, 1);

        out_vega = new QLineEdit(gridLayoutWidget);
        out_vega->setObjectName("out_vega");
        out_vega->setReadOnly(true);

        gridLayout_3->addWidget(out_vega, 4, 1, 1, 1);

        label_16 = new QLabel(gridLayoutWidget);
        label_16->setObjectName("label_16");

        gridLayout_3->addWidget(label_16, 0, 0, 1, 1);

        out_status = new QLineEdit(gridLayoutWidget);
        out_status->setObjectName("out_status");
        out_status->setReadOnly(true);

        gridLayout_3->addWidget(out_status, 0, 1, 1, 1);

        label_12 = new QLabel(gridLayoutWidget);
        label_12->setObjectName("label_12");

        gridLayout_3->addWidget(label_12, 5, 0, 1, 1);

        label_13 = new QLabel(gridLayoutWidget);
        label_13->setObjectName("label_13");

        gridLayout_3->addWidget(label_13, 6, 0, 1, 1);

        out_gamma = new QLineEdit(gridLayoutWidget);
        out_gamma->setObjectName("out_gamma");
        out_gamma->setReadOnly(true);

        gridLayout_3->addWidget(out_gamma, 3, 1, 1, 1);

        label_11 = new QLabel(gridLayoutWidget);
        label_11->setObjectName("label_11");

        gridLayout_3->addWidget(label_11, 4, 0, 1, 1);

        out_fair = new QLineEdit(gridLayoutWidget);
        out_fair->setObjectName("out_fair");
        out_fair->setReadOnly(true);

        gridLayout_3->addWidget(out_fair, 1, 1, 1, 1);

        label_9 = new QLabel(gridLayoutWidget);
        label_9->setObjectName("label_9");

        gridLayout_3->addWidget(label_9, 2, 0, 1, 1);

        out_rho = new QLineEdit(gridLayoutWidget);
        out_rho->setObjectName("out_rho");
        out_rho->setReadOnly(true);

        gridLayout_3->addWidget(out_rho, 6, 1, 1, 1);

        out_delta = new QLineEdit(gridLayoutWidget);
        out_delta->setObjectName("out_delta");
        out_delta->setReadOnly(true);

        gridLayout_3->addWidget(out_delta, 2, 1, 1, 1);


        horizontalLayout_2->addLayout(gridLayout_3);

        verticalSpacer_2 = new QSpacerItem(100, 40, QSizePolicy::Policy::Minimum, QSizePolicy::Policy::Expanding);

        horizontalLayout_2->addItem(verticalSpacer_2);


        gridLayout->addLayout(horizontalLayout_2, 1, 2, 1, 1);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName("horizontalLayout");
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName("formLayout");
        label_2 = new QLabel(gridLayoutWidget);
        label_2->setObjectName("label_2");

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        inp_spot = new QDoubleSpinBox(gridLayoutWidget);
        inp_spot->setObjectName("inp_spot");
        inp_spot->setMinimum(0.010000000000000);
        inp_spot->setMaximum(100000.000000000000000);
        inp_spot->setValue(100.000000000000000);

        formLayout->setWidget(1, QFormLayout::FieldRole, inp_spot);

        label_3 = new QLabel(gridLayoutWidget);
        label_3->setObjectName("label_3");

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        inp_strike = new QDoubleSpinBox(gridLayoutWidget);
        inp_strike->setObjectName("inp_strike");
        inp_strike->setMinimum(0.010000000000000);
        inp_strike->setMaximum(100000.000000000000000);
        inp_strike->setValue(100.000000000000000);

        formLayout->setWidget(2, QFormLayout::FieldRole, inp_strike);

        label_8 = new QLabel(gridLayoutWidget);
        label_8->setObjectName("label_8");

        formLayout->setWidget(3, QFormLayout::LabelRole, label_8);

        inp_maturity = new QDoubleSpinBox(gridLayoutWidget);
        inp_maturity->setObjectName("inp_maturity");
        inp_maturity->setMinimum(0.010000000000000);
        inp_maturity->setMaximum(100.000000000000000);
        inp_maturity->setValue(1.000000000000000);

        formLayout->setWidget(3, QFormLayout::FieldRole, inp_maturity);

        label_4 = new QLabel(gridLayoutWidget);
        label_4->setObjectName("label_4");

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        inp_vol = new QDoubleSpinBox(gridLayoutWidget);
        inp_vol->setObjectName("inp_vol");
        inp_vol->setMaximum(200.000000000000000);
        inp_vol->setValue(20.000000000000000);

        formLayout->setWidget(4, QFormLayout::FieldRole, inp_vol);

        label_6 = new QLabel(gridLayoutWidget);
        label_6->setObjectName("label_6");

        formLayout->setWidget(5, QFormLayout::LabelRole, label_6);

        inp_intrate = new QDoubleSpinBox(gridLayoutWidget);
        inp_intrate->setObjectName("inp_intrate");
        inp_intrate->setMinimum(-100.000000000000000);
        inp_intrate->setMaximum(100.000000000000000);
        inp_intrate->setValue(5.000000000000000);

        formLayout->setWidget(5, QFormLayout::FieldRole, inp_intrate);

        label_5 = new QLabel(gridLayoutWidget);
        label_5->setObjectName("label_5");

        formLayout->setWidget(6, QFormLayout::LabelRole, label_5);

        inp_div = new QDoubleSpinBox(gridLayoutWidget);
        inp_div->setObjectName("inp_div");
        inp_div->setMaximum(50.000000000000000);
        inp_div->setValue(0.000000000000000);

        formLayout->setWidget(6, QFormLayout::FieldRole, inp_div);

        label_7 = new QLabel(gridLayoutWidget);
        label_7->setObjectName("label_7");

        formLayout->setWidget(7, QFormLayout::LabelRole, label_7);

        inp_type = new QComboBox(gridLayoutWidget);
        inp_type->addItem(QString());
        inp_type->addItem(QString());
        inp_type->setObjectName("inp_type");

        formLayout->setWidget(7, QFormLayout::FieldRole, inp_type);

        btn_calc = new QPushButton(gridLayoutWidget);
        btn_calc->setObjectName("btn_calc");

        formLayout->setWidget(10, QFormLayout::SpanningRole, btn_calc);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Policy::Expanding, QSizePolicy::Policy::Minimum);

        formLayout->setItem(9, QFormLayout::SpanningRole, horizontalSpacer);


        horizontalLayout->addLayout(formLayout);


        gridLayout->addLayout(horizontalLayout, 1, 0, 1, 1);

        line = new QFrame(gridLayoutWidget);
        line->setObjectName("line");
        line->setFrameShape(QFrame::Shape::VLine);
        line->setFrameShadow(QFrame::Shadow::Sunken);

        gridLayout->addWidget(line, 1, 1, 1, 1);

        label_14 = new QLabel(gridLayoutWidget);
        label_14->setObjectName("label_14");

        gridLayout->addWidget(label_14, 0, 0, 1, 1);

        label_15 = new QLabel(gridLayoutWidget);
        label_15->setObjectName("label_15");

        gridLayout->addWidget(label_15, 0, 2, 1, 1);

        MainWindow->setCentralWidget(centralWidget);
        gridLayoutWidget->raise();
        gridLayoutWidget->raise();
        label->raise();
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName("statusBar");
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Black Scholes Merton European Pricer", nullptr));
        actionAbout->setText(QCoreApplication::translate("MainWindow", "About", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "Fair", nullptr));
        label_10->setText(QCoreApplication::translate("MainWindow", "Gamma (%)", nullptr));
        label_16->setText(QCoreApplication::translate("MainWindow", "Status", nullptr));
        label_12->setText(QCoreApplication::translate("MainWindow", "Theta", nullptr));
        label_13->setText(QCoreApplication::translate("MainWindow", "Dv01 / Rho", nullptr));
        label_11->setText(QCoreApplication::translate("MainWindow", "Vega", nullptr));
        label_9->setText(QCoreApplication::translate("MainWindow", "Delta (%)", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "Spot", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "Strike", nullptr));
        label_8->setText(QCoreApplication::translate("MainWindow", "Maturity (Years)", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "Volatility (%)", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "Interest Rate (%)", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "Dividend (%)", nullptr));
        label_7->setText(QCoreApplication::translate("MainWindow", "Type", nullptr));
        inp_type->setItemText(0, QCoreApplication::translate("MainWindow", "Call", nullptr));
        inp_type->setItemText(1, QCoreApplication::translate("MainWindow", "Put", nullptr));

        btn_calc->setText(QCoreApplication::translate("MainWindow", "Calculate Fair and Greeks", nullptr));
        label_14->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Inputs</span></p></body></html>", nullptr));
        label_15->setText(QCoreApplication::translate("MainWindow", "<html><head/><body><p><span style=\" font-weight:600;\">Outputs</span></p></body></html>", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
