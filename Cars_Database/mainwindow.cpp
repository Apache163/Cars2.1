#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QSqlTableModel>
#include<iostream>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("aboutcar");
    db.setUserName("root");
    db.setPassword("");
    if(db.open())
    {
        qDebug("Success");
    }
    else
    {
        qDebug("Error");
    }

    query = new QSqlQuery(db);
    model = new QSqlTableModel(this, db);
    model->setTable("ABOUT_CARS");
    model->select();
    ui->tableView->setModel(model);



}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    QString str = ui->textEdit->toPlainText();
    qDebug() << "You typed: " + str + " in TextEdit";
    ui->textEdit->clear();




    if (ui->radioButton->isChecked())
    {

        /*query = new QSqlQuery(db);
        query->prepare("select * from aboutcar where CAR_ID = " + str);
        model->query();*/
        model->setFilter("CAR_ID = "+str);
        model->select();
    }
    if (ui->radioButton_2->isChecked())
    {
        model->setFilter("BRAND = "+str);
        model->select();
    }
    if (ui->radioButton_3->isChecked())
    {
        model->setFilter("MODEL = "+str);
        model->select();
    }
    if (ui->radioButton_4->isChecked())
    {
        /*query = new QSqlQuery(db);
        query->prepare("select * from aboutcar where MODEL_YEAR = " + str);
        model->query();*/
        model->setFilter("MODEL_YEAR = "+str);
        model->select();
    }
    if (ui->radioButton_5->isChecked())
    {
        /*query = new QSqlQuery(db);
        query->prepare("select * from aboutcar where FIRST_MODEL_YEAR = " + str);
        model->query();*/
        model->setFilter("FIRST_MODEL_YEAR = "+str);
        model->select();
    }
    if (ui->radioButton_6->isChecked())
    {
        model->setFilter("BODY_TYPE = "+str);
        model->select();
    }
    if (ui->radioButton_7->isChecked())
    {
        /*query = new QSqlQuery(db);
        query->prepare("select * from aboutcar where DOORS = "+ str);
        model->query();*/
        model->setFilter("DOORS = "+str);
        model->select();
    }
    if (ui->radioButton_8->isChecked())
    {
        /*query = new QSqlQuery(db);
        query->prepare("select * from aboutcar where ENGINE_POWER = " + str);
        model->query();*/
        model->setFilter("ENGINE_POWER = "+str);
        model->select();
    }


}


void MainWindow::on_pushButton_2_clicked()
{
    ui->textEdit->clear();
    query = new QSqlQuery(db);
    model = new QSqlTableModel(this, db);
    model->setTable("ABOUT_CARS");
    model->select();
    ui->tableView->setModel(model);
}


void MainWindow::on_pushButton_3_clicked()
{
    this->close();
}

