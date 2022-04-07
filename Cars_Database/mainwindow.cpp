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
   word = QT_FEATURE_textedit;

    if (ui->radioButton->isChecked())
    {
        rb = 1;
    }
    if (ui->radioButton_2->isChecked())
    {
        rb = 2;
    }
    if (ui->radioButton_3->isChecked())
    {
        rb = 3;
    }
    if (ui->radioButton_4->isChecked())
    {
        rb = 4;
    }
    if (ui->radioButton_5->isChecked())
    {
        rb = 5;
    }
    if (ui->radioButton_6->isChecked())
    {
        rb = 6;
    }
    if (ui->radioButton_7->isChecked())
    {
        rb = 7;
    }
    if (ui->radioButton_8->isChecked())
    {
        rb = 8;
    }
    switch(rb)
    {
        case 1:
        model->setFilter("CAR_ID = 4");
        model->select();
        //запрос;
        break;
        case 2:
        model->setFilter("BRAND = Tesla");
        model->select();
        //запрос;
        break;
        case 3:
        model->setFilter("MODEL = XC70");
        model->select();
        //запрос;
        break;
        case 4:
        model->setFilter("MODEL_YEAR = 2019");
        model->select();
        //запрос;
        break;
        case 5:
        model->setFilter("FIRST_MODEL_YEAR = 2004");
        model->select();
        //запрос;
        break;
        case 6:
        model->setFilter("BODY_TYPE = Jeep");
        model->select();
        //запрос;
        break;
        case 7:
        model->setFilter("DOORS = 5");
        model->select();
        //запрос;
        break;
        case 8:
        model->setFilter("ENGINE_POWER = 560");
        model->select();
        //запрос;
        break;
        }

   std::cout << rb;


 //Добавить switch-case на проверку радиокнопок и отправки соответствующего запроса
    //ui->radioClear->isChecked() - проверка на нажатие
    //запрос типа select * from aboutcar where КОЛОНКА = выделенная ячейка в таблице

}


void MainWindow::on_pushButton_2_clicked()
{
    query = new QSqlQuery(db);
    model = new QSqlTableModel(this, db);
    model->setTable("ABOUT_CARS");
    model->select();
    ui->tableView->setModel(model);
}

