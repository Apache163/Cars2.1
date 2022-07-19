#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QSqlQuery>
#include <QSqlTableModel>
#include<iostream>
#include <QSqlRelationalTableModel>
#include <QFileDialog>
#include <QFile>
#include <QDir>
#include <QTableWidget>

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

void MainWindow::on_pushButton_FindDB1_clicked() //Запросы по поиску общей информации об авто
{
    QString str = ui->textEdit_SearchBarBrand->toPlainText();
    qDebug() << "You typed: " + str + " in TextEdit";
    ui->textEdit_SearchBarBrand->clear();

    if (ui->radioButton_CarID1->isChecked())
    {
        model->setFilter("CAR_ID = "+str);
        model->select();
    }
    if (ui->radioButton_Brand1->isChecked())
    {
        qr = "BRAND = '"+str+"'";
        model->setFilter(qr);
        model->select();
    }
    if (ui->radioButton_Model1->isChecked())
    {
        qr = "MODEL = '"+str+"'";
        model->setFilter(qr);
        model->select();
    }
    if (ui->radioButton_ModelYear1->isChecked())
    {
        model->setFilter("MODEL_YEAR = "+str);
        model->select();
    }
    if (ui->radioButton_FirstModel1->isChecked())
    {
        model->setFilter("FIRST_MODEL_YEAR = "+str);
        model->select();
    }
    if (ui->radioButton_BodyType1->isChecked())
    {
        qr = "BODY_TYPE = '"+str+"'";
        model->setFilter(qr);
        model->select();
    }
    if (ui->radioButton_Doors1->isChecked())
    {
        model->setFilter("DOORS = "+str);
        model->select();
    }
    if (ui->radioButton_Power1->isChecked())
    {
        model->setFilter("ENGINE_POWER = "+str);
        model->select();
    }
    qDebug() << qr;
}

void MainWindow::on_pushButton_UpdateDB1_clicked()
{
    ui->textEdit_SearchBarBrand->clear();
    query = new QSqlQuery(db);
    model = new QSqlTableModel(this, db);
    model->setTable("ABOUT_CARS");


    model->select();
    ui->tableView->setModel(model);
}

void MainWindow::on_pushButton_Exit1_clicked()
{
    this->close();
}




void MainWindow::on_pushButton_FindDB2_clicked() //Запросы по поиску конкретного авто
{
    QString str = ui->textEdit_SearchBarCC->toPlainText();
    qDebug() << "You typed: " + str + " in TextEdit";
    ui->textEdit_SearchBarCC->clear();

    if (ui->radioButton_CCID2->isChecked())
    {
        model2->setFilter("CC_ID = "+str);
        model2->select();
    }
    if (ui->radioButton_CarID2->isChecked())
    {
        model2->setFilter("CAR_ID = "+str);
        model2->select();
    }
    if (ui->radioButton_Brand2->isChecked())
    {
        qr = "BRAND = '"+str+"'";
        model2->setFilter(qr);
        model2->select();
    }
    if (ui->radioButton_Model2->isChecked())
    {
        qr = "MODEL = '"+str+"'";
        model2->setFilter(qr);
        model2->select();
    }
    if (ui->radioButton_ModelYear2->isChecked())
    {
        model2->setFilter("MODEL_YEAR = "+str);
        model2->select();
    }
    if (ui->radioButton_FirstModel2->isChecked())
    {
        model2->setFilter("FIRST_MODEL_YEAR = "+str);
        model2->select();
    }
    if (ui->radioButton_BodyType2->isChecked())
    {
        qr = "BODY_TYPE = '"+str+"'";
        model2->setFilter(qr);
        model2->select();
    }
    if (ui->radioButton_BodyColor2->isChecked())
    {
        qr = "BODY_COLOR = '"+str+"'";
        model2->setFilter(qr);
        model2->select();
    }
    if (ui->radioButton_Mileage2->isChecked())
    {
        model2->setFilter("MILEAGE <= "+str);
        model2->select();
    }
    if (ui->radioButton_Doors2->isChecked())
    {
        model2->setFilter("DOORS = "+str);
        model2->select();
    }
    if (ui->radioButton_Power2->isChecked())
    {
        model2->setFilter("ENGINE_POWER = "+str);
        model2->select();
    }



}


void MainWindow::on_pushButton_Exit2_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_UpdateDB2_clicked()
{
    query2 = new QSqlQuery(db);
    model2 = new QSqlTableModel(this, db);
    model2->setTable("currentcar");
    model2->select();
    ui->tableView_2->setModel(model2);
}


void MainWindow::on_pushButton_FindDB3_clicked() //Запросы по поиску владельца и его автомобилей
{
    QString str = ui->textEdit_SearchBarOwners->toPlainText();
    qDebug() << "You typed: " + str + " in TextEdit";
    ui->textEdit_SearchBarOwners->clear();

    if (ui->radioButton_FullName->isChecked())
    {
        qr = "FullName = '"+str+"'";
        model3->setFilter(qr);
        model3->select();
    }

    if (ui->radioButton_Email->isChecked())
    {
        qr = "Email = '"+str+"'";
        model3->setFilter(qr);
        model3->select();
    }

    if (ui->radioButton_CarsByFullName->isChecked())
    {
        qr = "FullName = '"+str+"'";
        ui->tableView_3->setModel(model4);
        model4->setFilter(qr);
        model4->select();
    }

    if (ui->radioButton_OwnerID->isChecked())
    {
        model3->setFilter("OwnerId = "+str);
        model3->select();
    }
    if (ui->radioButton_CarsByEmail->isChecked())
    {
        qr = "Email = '"+str+"'";
        ui->tableView_3->setModel(model4);
        model4->setFilter(qr);
        model4->select();
    }


}


void MainWindow::on_pushButton_UpdateDB3_clicked()
{
    query3 = new QSqlQuery(db);
    model3 = new QSqlTableModel(this, db);
    model3->setTable("owner");
    model3->select();
    ui->tableView_3->setModel(model3);


}


void MainWindow::on_pushButton_Exit3_clicked()
{
    this->close();
}


void MainWindow::on_pushButton_ConnectDB1_clicked()
{
    QString File = QFileDialog::getOpenFileName(this,tr("Сhoose DataBase"),"Домашний//","All file (*.*);;");
    qDebug() << File;
    if (QFile::exists(File))
    {
        QString FilePath = "Домашний//Cars2.0//Cars_Database"+ File.right(File.size()-File.lastIndexOf("/")-1); //QCoreApplication::applicationDirPath()
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


void MainWindow::on_pushButton_ConnectDB2_clicked()
{
    QString File = QFileDialog::getOpenFileName(this,tr("Сhoose DataBase"),"Домашний//Cars2.0//Cars_Database","All file (*.*);;");
    qDebug() << File;
    if (QFile::exists(File))
    {
        QString FilePath = "Домашний//Cars2.0//Cars_Database"+ File.right(File.size()-File.lastIndexOf("/")-1); //QCoreApplication::applicationDirPath()
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


void MainWindow::on_pushButton_ConnectDB3_clicked()
{
    QString File = QFileDialog::getOpenFileName(this,tr("Сhoose DataBase"),"Домашний//","All file (*.*);;");
    qDebug() << File;
    if (QFile::exists(File))
    {
        QString FilePath = "Домашний//Cars2.0//Cars_Database"+ File.right(File.size()-File.lastIndexOf("/")-1); //QCoreApplication::applicationDirPath()
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


void MainWindow::on_pushButton_AddToDB1_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_AddToDB2_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_pushButton_AddToDB3_clicked()
{
    ui->tabWidget->setCurrentIndex(3);
}

void MainWindow::on_radioButton_AddToBrandList_clicked() //Brands
{
    ui->tableWidget->setColumnCount(8);
    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Car_ID" << "Brand" << "Model"
                                               << "Model_Year" << "First_Model" << "Body_type"
                                               << "Doors" << "Engine_Power");
    ui->tableWidget->clearContents();
}

void MainWindow::on_radioButton_AddToCarsList_clicked() //Current Cars
{
    ui->tableWidget->setColumnCount(11);
    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() <<"CC_ID" << "Car_ID" << "Brand" << "Model"
                                               << "Model_Year" << "First_Model" << "Body_type" << "Body_Color"
                                               << "Mileage" << "Doors" << "Engine_Power");
    ui->tableWidget->clearContents();
}

void MainWindow::on_radioButton_AddToOwnersList_clicked() //Owners
{
    ui->tableWidget->setColumnCount(3);
    ui->tableWidget->setRowCount(1);
    ui->tableWidget->setHorizontalHeaderLabels(QStringList() << "Owner_ID" << "Full_Name" << "Email");
    ui->tableWidget->clearContents();
}

void MainWindow::on_pushButton_Exit4_clicked()
{
    this->close();
}

void MainWindow::on_pushButton_AddQuery_clicked()
{
   if (ui->radioButton_AddToBrandList->isChecked())//brands
   {

        car_id = ui->tableWidget->item(0,0)->text();
        brand = ui->tableWidget->item(0,1)->text();
        car_model = ui->tableWidget->item(0,2)->text();
        model_year = ui->tableWidget->item(0,3)->text();
        first_model = ui->tableWidget->item(0,4)->text();
        body_type = ui->tableWidget->item(0,5)->text();
        doors = ui->tableWidget->item(0,6)->text();
        engine_power = ui->tableWidget->item(0,7)->text();
        QSqlQuery query5 = QSqlQuery(db);
        query5.exec("INSERT INTO ABOUT_CARS (CAR_ID, BRAND, MODEL, MODEL_YEAR, FIRST_MODEL_YEAR, BODY_TYPE, DOORS, ENGINE_POWER)"
                    "VALUES ("+ car_id +", '" + brand + "', '" + car_model + "', " + model_year + ", " + first_model + ", '" +
                   body_type + "', " + doors+", " + engine_power + ")");



   }
   if (ui->radioButton_AddToCarsList->isChecked())//Current cars
   {

       cc_id = ui->tableWidget->item(0,0)->text();
       car_id = ui->tableWidget->item(0,1)->text();
       brand = ui->tableWidget->item(0,2)->text();
       car_model = ui->tableWidget->item(0,3)->text();
       model_year = ui->tableWidget->item(0,4)->text();
       first_model = ui->tableWidget->item(0,5)->text();
       body_type = ui->tableWidget->item(0,6)->text();
       body_color = ui->tableWidget->item(0,7)->text();
       mileage = ui->tableWidget->item(0,8)->text();
       doors = ui->tableWidget->item(0,9)->text();
       engine_power = ui->tableWidget->item(0,10)->text();

       QSqlQuery query6 = QSqlQuery(db);
       query6.exec("INSERT INTO currentcar (CC_ID, CAR_ID, BRAND, MODEL, CC_MODEL_YEAR, FIRST_MODEL_YEAR, BODY_TYPE, BODY_COLOR, MILEAGE, DOORS, ENGINE_POWER)"
                   "VALUES (" + cc_id + ", " + car_id + ", '" + brand + "', '" + car_model + "', " + model_year + ", " + first_model + ", '" + body_type + "', '" +
                   body_color + "', " + mileage + ", " + doors + ", " + engine_power + ")");
   }

   if (ui->radioButton_AddToOwnersList->isChecked())//Owners
   {

       owner_id = ui->tableWidget->item(0,0)->text();
       full_name = ui->tableWidget->item(0,1)->text();
       email = ui->tableWidget->item(0,2)->text();
       QSqlQuery query7 = QSqlQuery(db);
       query7.exec("INSERT INTO owner (OwnerId, FullName, Email) VALUES (" + owner_id + ", '" + full_name + "', '" + email + "')");
       QSqlQuery query8 = QSqlQuery(db);
       query8.exec("INSERT INTO QueryHelper (BRAND, MODEL, CC_MODEL_YEAR, FIRST_MODEL_YEAR,  BODY_TYPE, BODY_COLOR, MILEAGE, DOORS, ENGINE_POWER, FullName, Email)"
                   "VALUES ('"+brand+"', '"+car_model+"', "+model_year+", " + first_model + ", '" + body_type + "', '" +
                   body_color + "', " + mileage + ", " + doors + ", " + engine_power+", '"+full_name+"', '"+email+"')");
   }
}

void MainWindow::on_pushButton_Clear_clicked()
{
    ui->tableWidget->clearContents();
}
