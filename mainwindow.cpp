#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "worker.h"

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

void MainWindow::on_pushButtonP_clicked()
{
    Worker *worker;
    worker = new Worker(this);
    QString location = "http://localhost:8000/json/position/altitude-ft";
    QString value = "2000";
    worker->postFG(location,value);
}


