/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLCDNumber>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QPushButton *createTruckPushButoon;
    QGroupBox *truck_groupBox_2;
    QLabel *chassisWithEngine_label;
    QGroupBox *chassisWithEngine_groupBox;
    QLabel *chassis_label;
    QGroupBox *chassis_groupBox;
    QLabel *frameChassis_label;
    QLabel *tires_label;
    QLabel *engine_label;
    QLabel *cabin_label;
    QLabel *truck_label;
    QLCDNumber *lcdNumber;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(1362, 736);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        createTruckPushButoon = new QPushButton(centralwidget);
        createTruckPushButoon->setObjectName("createTruckPushButoon");
        createTruckPushButoon->setGeometry(QRect(10, 10, 1341, 41));
        QFont font;
        font.setFamilies({QString::fromUtf8("Cooper Black")});
        font.setPointSize(20);
        createTruckPushButoon->setFont(font);
        truck_groupBox_2 = new QGroupBox(centralwidget);
        truck_groupBox_2->setObjectName("truck_groupBox_2");
        truck_groupBox_2->setGeometry(QRect(290, 160, 1061, 531));
        QFont font1;
        font1.setPointSize(14);
        font1.setBold(true);
        truck_groupBox_2->setFont(font1);
        chassisWithEngine_label = new QLabel(truck_groupBox_2);
        chassisWithEngine_label->setObjectName("chassisWithEngine_label");
        chassisWithEngine_label->setGeometry(QRect(10, 30, 251, 161));
        chassisWithEngine_label->setScaledContents(true);
        chassisWithEngine_groupBox = new QGroupBox(truck_groupBox_2);
        chassisWithEngine_groupBox->setObjectName("chassisWithEngine_groupBox");
        chassisWithEngine_groupBox->setGeometry(QRect(280, 120, 781, 411));
        chassisWithEngine_groupBox->setFont(font1);
        chassis_label = new QLabel(chassisWithEngine_groupBox);
        chassis_label->setObjectName("chassis_label");
        chassis_label->setGeometry(QRect(10, 30, 251, 161));
        chassis_label->setScaledContents(true);
        chassis_groupBox = new QGroupBox(chassisWithEngine_groupBox);
        chassis_groupBox->setObjectName("chassis_groupBox");
        chassis_groupBox->setGeometry(QRect(280, 120, 501, 291));
        chassis_groupBox->setFont(font1);
        frameChassis_label = new QLabel(chassis_groupBox);
        frameChassis_label->setObjectName("frameChassis_label");
        frameChassis_label->setGeometry(QRect(10, 30, 231, 151));
        frameChassis_label->setScaledContents(true);
        tires_label = new QLabel(chassis_groupBox);
        tires_label->setObjectName("tires_label");
        tires_label->setGeometry(QRect(260, 30, 231, 151));
        tires_label->setScaledContents(true);
        engine_label = new QLabel(chassisWithEngine_groupBox);
        engine_label->setObjectName("engine_label");
        engine_label->setGeometry(QRect(10, 240, 251, 161));
        engine_label->setScaledContents(true);
        cabin_label = new QLabel(truck_groupBox_2);
        cabin_label->setObjectName("cabin_label");
        cabin_label->setGeometry(QRect(10, 360, 251, 161));
        cabin_label->setScaledContents(true);
        truck_label = new QLabel(centralwidget);
        truck_label->setObjectName("truck_label");
        truck_label->setGeometry(QRect(20, 70, 251, 161));
        truck_label->setScaledContents(true);
        lcdNumber = new QLCDNumber(centralwidget);
        lcdNumber->setObjectName("lcdNumber");
        lcdNumber->setGeometry(QRect(290, 70, 1061, 71));
        lcdNumber->setDigitCount(10);
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 1362, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "Truck", nullptr));
        createTruckPushButoon->setText(QCoreApplication::translate("MainWindow", "Create Truck", nullptr));
        truck_groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "Truck", nullptr));
        chassisWithEngine_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        chassisWithEngine_groupBox->setTitle(QCoreApplication::translate("MainWindow", "ChassisWithEngine", nullptr));
        chassis_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        chassis_groupBox->setTitle(QCoreApplication::translate("MainWindow", "Chassis", nullptr));
        frameChassis_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        tires_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        engine_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        cabin_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
        truck_label->setText(QCoreApplication::translate("MainWindow", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
