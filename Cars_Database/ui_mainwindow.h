/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.11.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab_brand;
    QTableView *tableView;
    QPushButton *pushButton_Exit1;
    QPushButton *pushButton_UpdateDB1;
    QTextEdit *textEdit_SearchBarBrand;
    QPushButton *pushButton_FindDB1;
    QPushButton *pushButton_ConnectDB1;
    QPushButton *pushButton_AddToDB1;
    QRadioButton *radioButton_FirstModel1;
    QRadioButton *radioButton_Doors1;
    QRadioButton *radioButton_Model1;
    QRadioButton *radioButton_Brand1;
    QRadioButton *radioButton_CarID1;
    QRadioButton *radioButton_BodyType1;
    QRadioButton *radioButton_ModelYear1;
    QRadioButton *radioButton_Power1;
    QWidget *tab_cc;
    QTextEdit *textEdit_SearchBarCC;
    QPushButton *pushButton_FindDB2;
    QPushButton *pushButton_UpdateDB2;
    QPushButton *pushButton_Exit2;
    QTableView *tableView_2;
    QPushButton *pushButton_ConnectDB2;
    QPushButton *pushButton_AddToDB2;
    QRadioButton *radioButton_Mileage2;
    QRadioButton *radioButton_Brand2;
    QRadioButton *radioButton_Model2;
    QRadioButton *radioButton_CCID2;
    QRadioButton *radioButton_Doors2;
    QRadioButton *radioButton_CarID2;
    QRadioButton *radioButton_ModelYear2;
    QRadioButton *radioButton_BodyColor2;
    QRadioButton *radioButton_BodyType2;
    QRadioButton *radioButton_Power2;
    QRadioButton *radioButton_FirstModel2;
    QWidget *tab_owners;
    QTextEdit *textEdit_SearchBarOwners;
    QPushButton *pushButton_FindDB3;
    QPushButton *pushButton_UpdateDB3;
    QPushButton *pushButton_Exit3;
    QTableView *tableView_3;
    QPushButton *pushButton_ConnectDB3;
    QPushButton *pushButton_AddToDB3;
    QRadioButton *radioButton_OwnerID;
    QRadioButton *radioButton_FullName;
    QRadioButton *radioButton_Email;
    QRadioButton *radioButton_CarsByFullName;
    QRadioButton *radioButton_CarsByEmail;
    QWidget *tab_add;
    QRadioButton *radioButton_AddToBrandList;
    QRadioButton *radioButton_AddToCarsList;
    QRadioButton *radioButton_AddToOwnersList;
    QPushButton *pushButton_AddQuery;
    QPushButton *pushButton_Exit4;
    QTableWidget *tableWidget;
    QPushButton *pushButton_Clear;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(901, 507);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QStringLiteral("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 901, 481));
        tab_brand = new QWidget();
        tab_brand->setObjectName(QStringLiteral("tab_brand"));
        tableView = new QTableView(tab_brand);
        tableView->setObjectName(QStringLiteral("tableView"));
        tableView->setGeometry(QRect(0, 0, 891, 341));
        QFont font;
        font.setPointSize(9);
        tableView->setFont(font);
        pushButton_Exit1 = new QPushButton(tab_brand);
        pushButton_Exit1->setObjectName(QStringLiteral("pushButton_Exit1"));
        pushButton_Exit1->setGeometry(QRect(730, 350, 101, 21));
        pushButton_UpdateDB1 = new QPushButton(tab_brand);
        pushButton_UpdateDB1->setObjectName(QStringLiteral("pushButton_UpdateDB1"));
        pushButton_UpdateDB1->setGeometry(QRect(610, 350, 101, 21));
        textEdit_SearchBarBrand = new QTextEdit(tab_brand);
        textEdit_SearchBarBrand->setObjectName(QStringLiteral("textEdit_SearchBarBrand"));
        textEdit_SearchBarBrand->setGeometry(QRect(80, 350, 161, 21));
        pushButton_FindDB1 = new QPushButton(tab_brand);
        pushButton_FindDB1->setObjectName(QStringLiteral("pushButton_FindDB1"));
        pushButton_FindDB1->setGeometry(QRect(370, 350, 101, 21));
        pushButton_ConnectDB1 = new QPushButton(tab_brand);
        pushButton_ConnectDB1->setObjectName(QStringLiteral("pushButton_ConnectDB1"));
        pushButton_ConnectDB1->setGeometry(QRect(250, 350, 101, 21));
        pushButton_AddToDB1 = new QPushButton(tab_brand);
        pushButton_AddToDB1->setObjectName(QStringLiteral("pushButton_AddToDB1"));
        pushButton_AddToDB1->setGeometry(QRect(490, 350, 101, 21));
        radioButton_FirstModel1 = new QRadioButton(tab_brand);
        radioButton_FirstModel1->setObjectName(QStringLiteral("radioButton_FirstModel1"));
        radioButton_FirstModel1->setGeometry(QRect(430, 380, 111, 19));
        QFont font1;
        font1.setFamily(QStringLiteral("Arimo"));
        font1.setPointSize(9);
        font1.setBold(true);
        font1.setWeight(75);
        radioButton_FirstModel1->setFont(font1);
        radioButton_Doors1 = new QRadioButton(tab_brand);
        radioButton_Doors1->setObjectName(QStringLiteral("radioButton_Doors1"));
        radioButton_Doors1->setGeometry(QRect(630, 380, 71, 19));
        radioButton_Doors1->setFont(font1);
        radioButton_Model1 = new QRadioButton(tab_brand);
        radioButton_Model1->setObjectName(QStringLiteral("radioButton_Model1"));
        radioButton_Model1->setGeometry(QRect(250, 380, 71, 19));
        radioButton_Model1->setFont(font1);
        radioButton_Brand1 = new QRadioButton(tab_brand);
        radioButton_Brand1->setObjectName(QStringLiteral("radioButton_Brand1"));
        radioButton_Brand1->setGeometry(QRect(180, 380, 71, 19));
        radioButton_Brand1->setFont(font1);
        radioButton_CarID1 = new QRadioButton(tab_brand);
        radioButton_CarID1->setObjectName(QStringLiteral("radioButton_CarID1"));
        radioButton_CarID1->setGeometry(QRect(110, 380, 71, 19));
        radioButton_CarID1->setFont(font1);
        radioButton_BodyType1 = new QRadioButton(tab_brand);
        radioButton_BodyType1->setObjectName(QStringLiteral("radioButton_BodyType1"));
        radioButton_BodyType1->setGeometry(QRect(540, 380, 91, 19));
        radioButton_BodyType1->setFont(font1);
        radioButton_ModelYear1 = new QRadioButton(tab_brand);
        radioButton_ModelYear1->setObjectName(QStringLiteral("radioButton_ModelYear1"));
        radioButton_ModelYear1->setGeometry(QRect(320, 380, 111, 19));
        radioButton_ModelYear1->setFont(font1);
        radioButton_Power1 = new QRadioButton(tab_brand);
        radioButton_Power1->setObjectName(QStringLiteral("radioButton_Power1"));
        radioButton_Power1->setGeometry(QRect(700, 380, 71, 19));
        radioButton_Power1->setFont(font1);
        tabWidget->addTab(tab_brand, QString());
        tab_cc = new QWidget();
        tab_cc->setObjectName(QStringLiteral("tab_cc"));
        textEdit_SearchBarCC = new QTextEdit(tab_cc);
        textEdit_SearchBarCC->setObjectName(QStringLiteral("textEdit_SearchBarCC"));
        textEdit_SearchBarCC->setGeometry(QRect(60, 350, 161, 21));
        pushButton_FindDB2 = new QPushButton(tab_cc);
        pushButton_FindDB2->setObjectName(QStringLiteral("pushButton_FindDB2"));
        pushButton_FindDB2->setGeometry(QRect(350, 350, 101, 21));
        pushButton_UpdateDB2 = new QPushButton(tab_cc);
        pushButton_UpdateDB2->setObjectName(QStringLiteral("pushButton_UpdateDB2"));
        pushButton_UpdateDB2->setGeometry(QRect(590, 350, 101, 21));
        pushButton_Exit2 = new QPushButton(tab_cc);
        pushButton_Exit2->setObjectName(QStringLiteral("pushButton_Exit2"));
        pushButton_Exit2->setGeometry(QRect(710, 350, 101, 21));
        tableView_2 = new QTableView(tab_cc);
        tableView_2->setObjectName(QStringLiteral("tableView_2"));
        tableView_2->setGeometry(QRect(0, 0, 891, 341));
        pushButton_ConnectDB2 = new QPushButton(tab_cc);
        pushButton_ConnectDB2->setObjectName(QStringLiteral("pushButton_ConnectDB2"));
        pushButton_ConnectDB2->setGeometry(QRect(230, 350, 101, 21));
        pushButton_AddToDB2 = new QPushButton(tab_cc);
        pushButton_AddToDB2->setObjectName(QStringLiteral("pushButton_AddToDB2"));
        pushButton_AddToDB2->setGeometry(QRect(470, 350, 101, 21));
        radioButton_Mileage2 = new QRadioButton(tab_cc);
        radioButton_Mileage2->setObjectName(QStringLiteral("radioButton_Mileage2"));
        radioButton_Mileage2->setGeometry(QRect(760, 380, 71, 19));
        QFont font2;
        font2.setFamily(QStringLiteral("Arimo"));
        font2.setPointSize(8);
        font2.setBold(true);
        font2.setWeight(75);
        radioButton_Mileage2->setFont(font2);
        radioButton_Brand2 = new QRadioButton(tab_cc);
        radioButton_Brand2->setObjectName(QStringLiteral("radioButton_Brand2"));
        radioButton_Brand2->setGeometry(QRect(160, 380, 67, 19));
        radioButton_Brand2->setFont(font2);
        radioButton_Model2 = new QRadioButton(tab_cc);
        radioButton_Model2->setObjectName(QStringLiteral("radioButton_Model2"));
        radioButton_Model2->setGeometry(QRect(220, 380, 61, 19));
        radioButton_Model2->setFont(font2);
        radioButton_CCID2 = new QRadioButton(tab_cc);
        radioButton_CCID2->setObjectName(QStringLiteral("radioButton_CCID2"));
        radioButton_CCID2->setGeometry(QRect(60, 380, 111, 19));
        radioButton_CCID2->setFont(font2);
        radioButton_Doors2 = new QRadioButton(tab_cc);
        radioButton_Doors2->setObjectName(QStringLiteral("radioButton_Doors2"));
        radioButton_Doors2->setGeometry(QRect(600, 380, 61, 19));
        radioButton_Doors2->setFont(font2);
        radioButton_CarID2 = new QRadioButton(tab_cc);
        radioButton_CarID2->setObjectName(QStringLiteral("radioButton_CarID2"));
        radioButton_CarID2->setGeometry(QRect(0, 380, 61, 19));
        radioButton_CarID2->setFont(font2);
        radioButton_ModelYear2 = new QRadioButton(tab_cc);
        radioButton_ModelYear2->setObjectName(QStringLiteral("radioButton_ModelYear2"));
        radioButton_ModelYear2->setGeometry(QRect(280, 380, 91, 19));
        radioButton_ModelYear2->setFont(font2);
        radioButton_BodyColor2 = new QRadioButton(tab_cc);
        radioButton_BodyColor2->setObjectName(QStringLiteral("radioButton_BodyColor2"));
        radioButton_BodyColor2->setGeometry(QRect(670, 380, 91, 19));
        radioButton_BodyColor2->setFont(font2);
        radioButton_BodyType2 = new QRadioButton(tab_cc);
        radioButton_BodyType2->setObjectName(QStringLiteral("radioButton_BodyType2"));
        radioButton_BodyType2->setGeometry(QRect(510, 380, 91, 19));
        radioButton_BodyType2->setFont(font2);
        radioButton_Power2 = new QRadioButton(tab_cc);
        radioButton_Power2->setObjectName(QStringLiteral("radioButton_Power2"));
        radioButton_Power2->setGeometry(QRect(830, 380, 61, 19));
        radioButton_Power2->setFont(font2);
        radioButton_FirstModel2 = new QRadioButton(tab_cc);
        radioButton_FirstModel2->setObjectName(QStringLiteral("radioButton_FirstModel2"));
        radioButton_FirstModel2->setGeometry(QRect(380, 380, 121, 20));
        radioButton_FirstModel2->setFont(font2);
        tabWidget->addTab(tab_cc, QString());
        tab_owners = new QWidget();
        tab_owners->setObjectName(QStringLiteral("tab_owners"));
        textEdit_SearchBarOwners = new QTextEdit(tab_owners);
        textEdit_SearchBarOwners->setObjectName(QStringLiteral("textEdit_SearchBarOwners"));
        textEdit_SearchBarOwners->setGeometry(QRect(30, 350, 161, 21));
        pushButton_FindDB3 = new QPushButton(tab_owners);
        pushButton_FindDB3->setObjectName(QStringLiteral("pushButton_FindDB3"));
        pushButton_FindDB3->setGeometry(QRect(320, 350, 101, 21));
        pushButton_UpdateDB3 = new QPushButton(tab_owners);
        pushButton_UpdateDB3->setObjectName(QStringLiteral("pushButton_UpdateDB3"));
        pushButton_UpdateDB3->setGeometry(QRect(560, 350, 101, 21));
        pushButton_Exit3 = new QPushButton(tab_owners);
        pushButton_Exit3->setObjectName(QStringLiteral("pushButton_Exit3"));
        pushButton_Exit3->setGeometry(QRect(680, 350, 101, 21));
        tableView_3 = new QTableView(tab_owners);
        tableView_3->setObjectName(QStringLiteral("tableView_3"));
        tableView_3->setGeometry(QRect(0, 0, 891, 341));
        pushButton_ConnectDB3 = new QPushButton(tab_owners);
        pushButton_ConnectDB3->setObjectName(QStringLiteral("pushButton_ConnectDB3"));
        pushButton_ConnectDB3->setGeometry(QRect(200, 350, 101, 21));
        pushButton_AddToDB3 = new QPushButton(tab_owners);
        pushButton_AddToDB3->setObjectName(QStringLiteral("pushButton_AddToDB3"));
        pushButton_AddToDB3->setGeometry(QRect(440, 350, 101, 21));
        radioButton_OwnerID = new QRadioButton(tab_owners);
        radioButton_OwnerID->setObjectName(QStringLiteral("radioButton_OwnerID"));
        radioButton_OwnerID->setGeometry(QRect(140, 380, 81, 19));
        radioButton_OwnerID->setFont(font2);
        radioButton_FullName = new QRadioButton(tab_owners);
        radioButton_FullName->setObjectName(QStringLiteral("radioButton_FullName"));
        radioButton_FullName->setGeometry(QRect(220, 380, 71, 19));
        radioButton_FullName->setFont(font2);
        radioButton_Email = new QRadioButton(tab_owners);
        radioButton_Email->setObjectName(QStringLiteral("radioButton_Email"));
        radioButton_Email->setGeometry(QRect(300, 380, 111, 19));
        radioButton_Email->setFont(font2);
        radioButton_CarsByFullName = new QRadioButton(tab_owners);
        radioButton_CarsByFullName->setObjectName(QStringLiteral("radioButton_CarsByFullName"));
        radioButton_CarsByFullName->setGeometry(QRect(420, 380, 181, 19));
        radioButton_CarsByFullName->setFont(font2);
        radioButton_CarsByEmail = new QRadioButton(tab_owners);
        radioButton_CarsByEmail->setObjectName(QStringLiteral("radioButton_CarsByEmail"));
        radioButton_CarsByEmail->setGeometry(QRect(600, 380, 171, 20));
        radioButton_CarsByEmail->setFont(font2);
        tabWidget->addTab(tab_owners, QString());
        tab_add = new QWidget();
        tab_add->setObjectName(QStringLiteral("tab_add"));
        radioButton_AddToBrandList = new QRadioButton(tab_add);
        radioButton_AddToBrandList->setObjectName(QStringLiteral("radioButton_AddToBrandList"));
        radioButton_AddToBrandList->setGeometry(QRect(100, 350, 131, 22));
        radioButton_AddToCarsList = new QRadioButton(tab_add);
        radioButton_AddToCarsList->setObjectName(QStringLiteral("radioButton_AddToCarsList"));
        radioButton_AddToCarsList->setGeometry(QRect(250, 350, 121, 22));
        radioButton_AddToOwnersList = new QRadioButton(tab_add);
        radioButton_AddToOwnersList->setObjectName(QStringLiteral("radioButton_AddToOwnersList"));
        radioButton_AddToOwnersList->setGeometry(QRect(390, 350, 141, 22));
        pushButton_AddQuery = new QPushButton(tab_add);
        pushButton_AddQuery->setObjectName(QStringLiteral("pushButton_AddQuery"));
        pushButton_AddQuery->setGeometry(QRect(560, 350, 88, 21));
        pushButton_Exit4 = new QPushButton(tab_add);
        pushButton_Exit4->setObjectName(QStringLiteral("pushButton_Exit4"));
        pushButton_Exit4->setGeometry(QRect(780, 350, 88, 21));
        tableWidget = new QTableWidget(tab_add);
        tableWidget->setObjectName(QStringLiteral("tableWidget"));
        tableWidget->setGeometry(QRect(0, 0, 891, 341));
        pushButton_Clear = new QPushButton(tab_add);
        pushButton_Clear->setObjectName(QStringLiteral("pushButton_Clear"));
        pushButton_Clear->setGeometry(QRect(670, 350, 88, 21));
        tabWidget->addTab(tab_add, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QStringLiteral("menubar"));
        menubar->setGeometry(QRect(0, 0, 901, 30));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QStringLiteral("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(3);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_Exit1->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_UpdateDB1->setText(QApplication::translate("MainWindow", "Update DB", nullptr));
        pushButton_FindDB1->setText(QApplication::translate("MainWindow", "Find in DB", nullptr));
        pushButton_ConnectDB1->setText(QApplication::translate("MainWindow", "Connect DB", nullptr));
        pushButton_AddToDB1->setText(QApplication::translate("MainWindow", "Add to DB", nullptr));
        radioButton_FirstModel1->setText(QApplication::translate("MainWindow", "First Model", nullptr));
        radioButton_Doors1->setText(QApplication::translate("MainWindow", "Doors", nullptr));
        radioButton_Model1->setText(QApplication::translate("MainWindow", "Model", nullptr));
        radioButton_Brand1->setText(QApplication::translate("MainWindow", "Brand", nullptr));
        radioButton_CarID1->setText(QApplication::translate("MainWindow", "CarID", nullptr));
        radioButton_BodyType1->setText(QApplication::translate("MainWindow", "Body Type", nullptr));
        radioButton_ModelYear1->setText(QApplication::translate("MainWindow", "Model Year", nullptr));
        radioButton_Power1->setText(QApplication::translate("MainWindow", "Power", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_brand), QApplication::translate("MainWindow", "Brand List", nullptr));
        pushButton_FindDB2->setText(QApplication::translate("MainWindow", "Find in DB", nullptr));
        pushButton_UpdateDB2->setText(QApplication::translate("MainWindow", "Update DB", nullptr));
        pushButton_Exit2->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_ConnectDB2->setText(QApplication::translate("MainWindow", "Connect DB", nullptr));
        pushButton_AddToDB2->setText(QApplication::translate("MainWindow", "Add to DB", nullptr));
        radioButton_Mileage2->setText(QApplication::translate("MainWindow", "Mileage", nullptr));
        radioButton_Brand2->setText(QApplication::translate("MainWindow", "Brand", nullptr));
        radioButton_Model2->setText(QApplication::translate("MainWindow", "Model", nullptr));
        radioButton_CCID2->setText(QApplication::translate("MainWindow", "CurrentCarID", nullptr));
        radioButton_Doors2->setText(QApplication::translate("MainWindow", "Doors", nullptr));
        radioButton_CarID2->setText(QApplication::translate("MainWindow", "CarID", nullptr));
        radioButton_ModelYear2->setText(QApplication::translate("MainWindow", "Model Year", nullptr));
        radioButton_BodyColor2->setText(QApplication::translate("MainWindow", "Body Color", nullptr));
        radioButton_BodyType2->setText(QApplication::translate("MainWindow", "Body Type", nullptr));
        radioButton_Power2->setText(QApplication::translate("MainWindow", "Power", nullptr));
        radioButton_FirstModel2->setText(QApplication::translate("MainWindow", "First Model Year", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_cc), QApplication::translate("MainWindow", "Current Cars", nullptr));
        pushButton_FindDB3->setText(QApplication::translate("MainWindow", "Find in DB", nullptr));
        pushButton_UpdateDB3->setText(QApplication::translate("MainWindow", "Update DB", nullptr));
        pushButton_Exit3->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_ConnectDB3->setText(QApplication::translate("MainWindow", "Connect DB", nullptr));
        pushButton_AddToDB3->setText(QApplication::translate("MainWindow", "Add to DB", nullptr));
        radioButton_OwnerID->setText(QApplication::translate("MainWindow", "OwnerID", nullptr));
        radioButton_FullName->setText(QApplication::translate("MainWindow", "Owner", nullptr));
        radioButton_Email->setText(QApplication::translate("MainWindow", "Owner's EMail", nullptr));
        radioButton_CarsByFullName->setText(QApplication::translate("MainWindow", "Owner's cars by FullName", nullptr));
        radioButton_CarsByEmail->setText(QApplication::translate("MainWindow", "Owner's cars by Email", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_owners), QApplication::translate("MainWindow", "Owners", nullptr));
        radioButton_AddToBrandList->setText(QApplication::translate("MainWindow", "Add to Brand List", nullptr));
        radioButton_AddToCarsList->setText(QApplication::translate("MainWindow", "Add to Cars List", nullptr));
        radioButton_AddToOwnersList->setText(QApplication::translate("MainWindow", "Add to Owners List", nullptr));
        pushButton_AddQuery->setText(QApplication::translate("MainWindow", "Add", nullptr));
        pushButton_Exit4->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_Clear->setText(QApplication::translate("MainWindow", "Clear", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_add), QApplication::translate("MainWindow", "Add to DB's", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
