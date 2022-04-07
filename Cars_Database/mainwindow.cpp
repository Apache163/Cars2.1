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










void MainWindow::on_tableView_clicked(const QModelIndex &index)
{
    row = index.row();
}


void MainWindow::on_pushButton_clicked()
{
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
    switch(rb)
    {
        case 1:
        //запрос;
        break;
        case 2:
        //запрос;
        break;
        case 3:
        //запрос;
        break;
        case 4:
        //запрос;
        break;
        case 5:
        //запрос;
        break;
        case 6:
        //запрос;
        break;
        case 7:
        //запрос;
        break;
        }
   std::cout << rb;

 //Добавить switch-case на проверку радиокнопок и отправки соответствующего запроса
    //ui->radioClear->isChecked() - проверка на нажатие
    //запрос типа select * from aboutcar where КОЛОНКА = выделенная ячейка в таблице

}

