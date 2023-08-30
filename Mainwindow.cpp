#include "Mainwindow.h"
#include "ui_Mainwindow.h"
#include<QDebug>
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    qDebug()<<"aaaaa";
}

MainWindow::~MainWindow()
{
    delete ui;
}
