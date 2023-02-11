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

void MainWindow::on_pushButtonG_clicked()
{
    Worker worker;
    worker.get("http://localhost:5500?--altitude=1000");
}

void MainWindow::on_pushButtonP_clicked()
{
    Worker worker;
    QByteArray data;
    data.append("=im");
    worker.post("https://vk.com",data);
}


