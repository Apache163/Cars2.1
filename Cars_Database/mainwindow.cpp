#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QSqlTableModel>
#include<iostream>
#include <QSqlRelationalTableModel>
#include <QFileDialog>
#include <QFile>
#include <QDir>

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

    query2 = new QSqlQuery(db);
    model2 = new QSqlTableModel(this, db);
    model2->setTable("currentcar");
    model2->select();
    ui->tableView_2->setModel(model2);

    query3 = new QSqlQuery(db);
    model3 = new QSqlTableModel(this, db);
    model3->setTable("owner");
    model3->select();
    ui->tableView_3->setModel(model3);

    query4 = new QSqlQuery(db);
    model4 = new QSqlTableModel(this, db);
    model4->setTable("QueryHelper");
    model4->select();


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked() //Запросы по поиску общей информации об авто
{
    QString str = ui->textEdit->toPlainText();
    qDebug() << "You typed: " + str + " in TextEdit";
    ui->textEdit->clear();

    if (ui->radioButton->isChecked())
    {
        model->setFilter("CAR_ID = "+str);
        model->select();
    }
    if (ui->radioButton_2->isChecked())
    {
        qr = "BRAND = '"+str+"'";
        model->setFilter(qr);
        model->select();
    }
    if (ui->radioButton_3->isChecked())
    {
        qr = "MODEL = '"+str+"'";
        model->setFilter(qr);
        model->select();
    }
    if (ui->radioButton_4->isChecked())
    {
        model->setFilter("MODEL_YEAR = "+str);
        model->select();
    }
    if (ui->radioButton_5->isChecked())
    {
        model->setFilter("FIRST_MODEL_YEAR = "+str);
        model->select();
    }
    if (ui->radioButton_6->isChecked())
    {
        qr = "BODY_TYPE = '"+str+"'";
        model->setFilter(qr);
        model->select();
    }
    if (ui->radioButton_7->isChecked())
    {
        model->setFilter("DOORS = "+str);
        model->select();
    }
    if (ui->radioButton_8->isChecked())
    {
        model->setFilter("ENGINE_POWER = "+str);
        model->select();
    }
    qDebug() << qr;
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




void MainWindow::on_pushButton_4_clicked() //Запросы по поиску конкретного авто
{
    QString str = ui->textEdit_2->toPlainText();
    qDebug() << "You typed: " + str + " in TextEdit";
    ui->textEdit_2->clear();

    if (ui->radioButton_9->isChecked())
    {
        model2->setFilter("CC_ID = "+str);
        model2->select();
    }
    if (ui->radioButton_10->isChecked())
    {
        model2->setFilter("CAR_ID = "+str);
        model2->select();
    }
    if (ui->radioButton_11->isChecked())
    {
        qr = "BRAND = '"+str+"'";
        model2->setFilter(qr);
        model2->select();
    }
    if (ui->radioButton_12->isChecked())
    {
        qr = "MODEL = '"+str+"'";
        model2->setFilter(qr);
        model2->select();
    }
    if (ui->radioButton_13->isChecked())
    {
        model2->setFilter("MODEL_YEAR = "+str);
        model2->select();
    }
    if (ui->radioButton_14->isChecked())
    {
        model2->setFilter("FIRST_MODEL_YEAR = "+str);
        model2->select();
    }
    if (ui->radioButton_15->isChecked())
    {
        qr = "BODY_TYPE = '"+str+"'";
        model2->setFilter(qr);
        model2->select();
    }
    if (ui->radioButton_16->isChecked())
    {
        qr = "BODY_COLOR = '"+str+"'";
        model2->setFilter(qr);
        model2->select();
    }
    if (ui->radioButton_17->isChecked())
    {
        model2->setFilter("MILEAGE <= "+str);
        model2->select();
    }
    if (ui->radioButton_18->isChecked())
    {
        model2->setFilter("DOORS = "+str);
        model2->select();
    }
    if (ui->radioButton_19->isChecked())
    {
        model2->setFilter("ENGINE_POWER = "+str);
        model2->select();
    }



}


void MainWindow::on_pushButton_6_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_5_clicked()
{
    query2 = new QSqlQuery(db);
    model2 = new QSqlTableModel(this, db);
    model2->setTable("currentcar");
    model2->select();
    ui->tableView_2->setModel(model2);
}


void MainWindow::on_pushButton_7_clicked() //Запросы по поиску владельца и его автомобилей
{
    QString str = ui->textEdit_3->toPlainText();
    qDebug() << "You typed: " + str + " in TextEdit";
    ui->textEdit_3->clear();

    if (ui->radioButton_20->isChecked())
    {
        qr = "FullName = '"+str+"'";
        model3->setFilter(qr);
        model3->select();
    }

    if (ui->radioButton_21->isChecked())
    {
        qr = "Email = '"+str+"'";
        model3->setFilter(qr);
        model3->select();
    }

    if (ui->radioButton_22->isChecked())
    {
        qr = "FullName = '"+str+"'";
        ui->tableView_3->setModel(model4);
        model4->setFilter(qr);
        model4->select();
    }

    if (ui->radioButton_23->isChecked())
    {
        model3->setFilter("OwnerId = "+str);
        model3->select();
    }
    if (ui->radioButton_24->isChecked())
    {
        qr = "Email = '"+str+"'";
        ui->tableView_3->setModel(model4);
        model4->setFilter(qr);
        model4->select();
    }


}


void MainWindow::on_pushButton_8_clicked()
{
    query3 = new QSqlQuery(db);
    model3 = new QSqlTableModel(this, db);
    model3->setTable("owner");
    model3->select();
    ui->tableView_3->setModel(model3);


}


void MainWindow::on_pushButton_9_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_12_clicked()
{
    QString File = QFileDialog::getOpenFileName(this,tr("Сhoose DataBase"),"C://","All file (*.*);;");
    qDebug() << File;
    if (QFile::exists(File))
    {
        QString FilePath = "E://Work//Cars2.0//Cars_Database//"+ File.right(File.size()-File.lastIndexOf("/")-1);
        qDebug() << FilePath;
        qDebug() << QFile::copy(File, FilePath);
    }
    else
    {
        qDebug() << "No file error";
    }

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

        query2 = new QSqlQuery(db);
        model2 = new QSqlTableModel(this, db);
        model2->setTable("currentcar");
        model2->select();
        ui->tableView_2->setModel(model2);

        query3 = new QSqlQuery(db);
        model3 = new QSqlTableModel(this, db);
        model3->setTable("owner");
        model3->select();
        ui->tableView_3->setModel(model3);

        query4 = new QSqlQuery(db);
        model4 = new QSqlTableModel(this, db);
        model4->setTable("QueryHelper");
        model4->select();





}


void MainWindow::on_pushButton_11_clicked()
{
    QString File = QFileDialog::getOpenFileName(this,tr("Сhoose DataBase"),"C://","All file (*.*);;");
    qDebug() << File;
    if (QFile::exists(File))
    {
        QString FilePath = "E://Work//Cars2.0//Cars_Database//"+ File.right(File.size()-File.lastIndexOf("/")-1);
        qDebug() << FilePath;
        qDebug() << QFile::copy(File, FilePath);
    }
    else
    {
        qDebug() << "No file error";
    }
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

    query2 = new QSqlQuery(db);
    model2 = new QSqlTableModel(this, db);
    model2->setTable("currentcar");
    model2->select();
    ui->tableView_2->setModel(model2);

    query3 = new QSqlQuery(db);
    model3 = new QSqlTableModel(this, db);
    model3->setTable("owner");
    model3->select();
    ui->tableView_3->setModel(model3);

    query4 = new QSqlQuery(db);
    model4 = new QSqlTableModel(this, db);
    model4->setTable("QueryHelper");
    model4->select();
}


void MainWindow::on_pushButton_10_clicked()
{
    QString File = QFileDialog::getOpenFileName(this,tr("Сhoose DataBase"),"C://","All file (*.*);;");
    qDebug() << File;
    if (QFile::exists(File))
    {
        QString FilePath = "E://Work//Cars2.0//Cars_Database//"+ File.right(File.size()-File.lastIndexOf("/")-1);
        qDebug() << FilePath;
        qDebug() << QFile::copy(File, FilePath);
    }
    else
    {
        qDebug() << "No file error";
    }
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

    query2 = new QSqlQuery(db);
    model2 = new QSqlTableModel(this, db);
    model2->setTable("currentcar");
    model2->select();
    ui->tableView_2->setModel(model2);

    query3 = new QSqlQuery(db);
    model3 = new QSqlTableModel(this, db);
    model3->setTable("owner");
    model3->select();
    ui->tableView_3->setModel(model3);

    query4 = new QSqlQuery(db);
    model4 = new QSqlTableModel(this, db);
    model4->setTable("QueryHelper");
    model4->select();
}

