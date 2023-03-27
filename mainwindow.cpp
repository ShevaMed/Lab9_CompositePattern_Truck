#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "factory.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_createTruckPushButoon_clicked()
{
    Component *truck = Factory::createTruck(ui->tires_label, ui->frameChassis_label, ui->chassis_label, ui->engine_label,
                                            ui->chassisWithEngine_label, ui->cabin_label, ui->truck_label,
                                            "./images/Tires.jpg", "./images/FrameChassis.jpg", "./images/Chassis.jpg", "./images/Engine.jpg",
                                            "./images/ChassisWithEngine.jpg", "./images/Cabin.jpg", "./images/Truck.jpg",
                                            50000, 200000, 50000, 250000, 70000, 200000, 100000);

    truck->draw();
    int cost = truck->getCost();

    ui->lcdNumber->display(cost);

    delete truck;
}

