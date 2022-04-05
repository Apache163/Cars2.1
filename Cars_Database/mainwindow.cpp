#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QSqlTableModel>

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









