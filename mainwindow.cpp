#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <iostream>
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    setWindowTitle("Neuronas");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_Captura_clicked()
{
    qDebug() << "ID: \n";
    ui->res->setText(QString::number(ui->Id->value()));
    qDebug() << "Voltaje: \n";
    ui->res->setText(QString::number(ui->Voltaje->value()));
    qDebug() << "Posicion X: \n";
    ui->res->setText(QString::number(ui->Posicionx->value()));
    qDebug() << "Posicion Y: \n";
    ui->res->setText(QString::number(ui->PosicionY->value()));
    qDebug() << "RED: \n";
    ui->res->setText(QString::number(ui->red->value()));
    qDebug() << "GREEN: \n";
    ui->res->setText(QString::number(ui->green->value()));
    qDebug() << "BLUE: \n";
    ui->res->setText(QString::number(ui->blue->value()));
}
