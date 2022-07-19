#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QSqlDatabase>
#include <QDebug>
#include <QSqlQuery>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>
#include <QFileDialog>
#include <QFile>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:



    void on_pushButton_Exit1_clicked();



    void on_pushButton_FindDB2_clicked();

    void on_pushButton_Exit2_clicked();

    void on_pushButton_UpdateDB2_clicked();

    void on_pushButton_FindDB3_clicked();

    void on_pushButton_UpdateDB3_clicked();

    void on_pushButton_Exit3_clicked();

    void on_pushButton_ConnectDB1_clicked();

    void on_pushButton_ConnectDB2_clicked();

    void on_pushButton_ConnectDB3_clicked();

    void on_pushButton_AddToDB1_clicked();

    void on_pushButton_AddToDB2_clicked();

    void on_pushButton_AddToDB3_clicked();

    void on_radioButton_AddToBrandList_clicked();

    void on_radioButton_AddToCarsList_clicked();

    void on_radioButton_AddToOwnersList_clicked();

    void on_pushButton_Exit4_clicked();

    void on_pushButton_AddQuery_clicked();

    void on_pushButton_Clear_clicked();

    void on_pushButton_FindDB1_clicked();

    void on_pushButton_UpdateDB1_clicked();

private:
    Ui::MainWindow *ui;
    QSqlDatabase db;
    QSqlQuery *query;
    QSqlTableModel *model;
    QSqlQuery *query2;
    QSqlTableModel *model2;
    QSqlQuery *query3;
    QSqlTableModel *model3;
    QSqlQuery *query4;
    QSqlTableModel *model4;




    int rb;
    QString str;
    QString qr;
    QString File;
    QString car_id;
    QString model_year;
    QString first_model;
    QString doors;
    QString engine_power;
    QString cc_id;
    QString mileage;
    QString owner_id;
    QString brand;
    QString car_model;
    QString body_type;
    QString body_color;
    QString full_name;
    QString email;

};
#endif // MAINWINDOW_H
