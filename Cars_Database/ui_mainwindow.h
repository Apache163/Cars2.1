/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.12
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableView>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QTabWidget *tabWidget;
    QWidget *tab;
    QTableView *tableView;
    QPushButton *pushButton_3;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_12;
    QPushButton *pushButton_13;
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_4;
    QRadioButton *radioButton_8;
    QWidget *tab_2;
    QTextEdit *textEdit_2;
    QRadioButton *radioButton_9;
    QRadioButton *radioButton_10;
    QRadioButton *radioButton_11;
    QRadioButton *radioButton_12;
    QRadioButton *radioButton_13;
    QRadioButton *radioButton_14;
    QRadioButton *radioButton_15;
    QRadioButton *radioButton_16;
    QRadioButton *radioButton_17;
    QRadioButton *radioButton_18;
    QRadioButton *radioButton_19;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTableView *tableView_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_14;
    QWidget *tab_3;
    QTextEdit *textEdit_3;
    QRadioButton *radioButton_20;
    QRadioButton *radioButton_21;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QTableView *tableView_3;
    QRadioButton *radioButton_23;
    QRadioButton *radioButton_22;
    QRadioButton *radioButton_24;
    QPushButton *pushButton_10;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(957, 801);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1822, 721));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 861, 391));
        QFont font;
        font.setPointSize(9);
        tableView->setFont(font);
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(680, 400, 101, 21));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(560, 400, 101, 21));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 400, 161, 21));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 400, 101, 21));
        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(200, 400, 101, 21));
        pushButton_13 = new QPushButton(tab);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(440, 400, 101, 21));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(90, 430, 606, 21));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        radioButton_5 = new QRadioButton(widget);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));

        horizontalLayout->addWidget(radioButton_5);

        radioButton_7 = new QRadioButton(widget);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));

        horizontalLayout->addWidget(radioButton_7);

        radioButton_3 = new QRadioButton(widget);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));

        horizontalLayout->addWidget(radioButton_3);

        radioButton_2 = new QRadioButton(widget);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));

        horizontalLayout->addWidget(radioButton_2);

        radioButton = new QRadioButton(widget);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));

        horizontalLayout->addWidget(radioButton);

        radioButton_6 = new QRadioButton(widget);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));

        horizontalLayout->addWidget(radioButton_6);

        radioButton_4 = new QRadioButton(widget);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));

        horizontalLayout->addWidget(radioButton_4);

        radioButton_8 = new QRadioButton(widget);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));

        horizontalLayout->addWidget(radioButton_8);

        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        textEdit_2 = new QTextEdit(tab_2);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));
        textEdit_2->setGeometry(QRect(30, 400, 161, 21));
        radioButton_9 = new QRadioButton(tab_2);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));
        radioButton_9->setGeometry(QRect(150, 600, 101, 19));
        radioButton_10 = new QRadioButton(tab_2);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));
        radioButton_10->setGeometry(QRect(250, 600, 61, 19));
        radioButton_11 = new QRadioButton(tab_2);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));
        radioButton_11->setGeometry(QRect(310, 600, 84, 19));
        radioButton_12 = new QRadioButton(tab_2);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));
        radioButton_12->setGeometry(QRect(370, 600, 61, 19));
        radioButton_13 = new QRadioButton(tab_2);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));
        radioButton_13->setGeometry(QRect(430, 600, 91, 19));
        radioButton_14 = new QRadioButton(tab_2);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));
        radioButton_14->setGeometry(QRect(520, 600, 131, 19));
        radioButton_15 = new QRadioButton(tab_2);
        radioButton_15->setObjectName(QString::fromUtf8("radioButton_15"));
        radioButton_15->setGeometry(QRect(170, 620, 91, 19));
        radioButton_16 = new QRadioButton(tab_2);
        radioButton_16->setObjectName(QString::fromUtf8("radioButton_16"));
        radioButton_16->setGeometry(QRect(260, 620, 91, 19));
        radioButton_17 = new QRadioButton(tab_2);
        radioButton_17->setObjectName(QString::fromUtf8("radioButton_17"));
        radioButton_17->setGeometry(QRect(350, 620, 71, 19));
        radioButton_18 = new QRadioButton(tab_2);
        radioButton_18->setObjectName(QString::fromUtf8("radioButton_18"));
        radioButton_18->setGeometry(QRect(420, 620, 61, 19));
        radioButton_19 = new QRadioButton(tab_2);
        radioButton_19->setObjectName(QString::fromUtf8("radioButton_19"));
        radioButton_19->setGeometry(QRect(480, 620, 111, 19));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 400, 101, 21));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(560, 400, 101, 21));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(680, 400, 101, 21));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(0, 0, 861, 391));
        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(200, 400, 101, 21));
        pushButton_14 = new QPushButton(tab_2);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(440, 400, 101, 21));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        textEdit_3 = new QTextEdit(tab_3);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(30, 400, 191, 21));
        radioButton_20 = new QRadioButton(tab_3);
        radioButton_20->setObjectName(QString::fromUtf8("radioButton_20"));
        radioButton_20->setGeometry(QRect(290, 600, 61, 19));
        radioButton_21 = new QRadioButton(tab_3);
        radioButton_21->setObjectName(QString::fromUtf8("radioButton_21"));
        radioButton_21->setGeometry(QRect(370, 600, 111, 19));
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(650, 600, 80, 21));
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(750, 600, 80, 21));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(840, 600, 80, 21));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setGeometry(QRect(0, 0, 861, 391));
        radioButton_23 = new QRadioButton(tab_3);
        radioButton_23->setObjectName(QString::fromUtf8("radioButton_23"));
        radioButton_23->setGeometry(QRect(210, 600, 84, 19));
        radioButton_22 = new QRadioButton(tab_3);
        radioButton_22->setObjectName(QString::fromUtf8("radioButton_22"));
        radioButton_22->setGeometry(QRect(210, 620, 181, 19));
        radioButton_24 = new QRadioButton(tab_3);
        radioButton_24->setObjectName(QString::fromUtf8("radioButton_24"));
        radioButton_24->setGeometry(QRect(390, 620, 161, 19));
        pushButton_10 = new QPushButton(tab_3);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(560, 600, 80, 21));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 957, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(2);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        pushButton_3->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Back to DB", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Find in DB", nullptr));
        pushButton_12->setText(QApplication::translate("MainWindow", "Connect DB", nullptr));
        pushButton_13->setText(QApplication::translate("MainWindow", "Add to DB", nullptr));
        radioButton_5->setText(QApplication::translate("MainWindow", "FIRST MODEL", nullptr));
        radioButton_7->setText(QApplication::translate("MainWindow", "DOORS", nullptr));
        radioButton_3->setText(QApplication::translate("MainWindow", "MODEL", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "BRAND", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "CAR_ID", nullptr));
        radioButton_6->setText(QApplication::translate("MainWindow", "BODY TYPE", nullptr));
        radioButton_4->setText(QApplication::translate("MainWindow", "MODEL YEAR", nullptr));
        radioButton_8->setText(QApplication::translate("MainWindow", "POWER", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Brand List", nullptr));
        radioButton_9->setText(QApplication::translate("MainWindow", "CurrentCarID", nullptr));
        radioButton_10->setText(QApplication::translate("MainWindow", "CarID", nullptr));
        radioButton_11->setText(QApplication::translate("MainWindow", "Brand", nullptr));
        radioButton_12->setText(QApplication::translate("MainWindow", "Model", nullptr));
        radioButton_13->setText(QApplication::translate("MainWindow", "Model Year", nullptr));
        radioButton_14->setText(QApplication::translate("MainWindow", "First Model Year", nullptr));
        radioButton_15->setText(QApplication::translate("MainWindow", "Body Type", nullptr));
        radioButton_16->setText(QApplication::translate("MainWindow", "Body Color", nullptr));
        radioButton_17->setText(QApplication::translate("MainWindow", "Mileage", nullptr));
        radioButton_18->setText(QApplication::translate("MainWindow", "Doors", nullptr));
        radioButton_19->setText(QApplication::translate("MainWindow", "Engine Power", nullptr));
        pushButton_4->setText(QApplication::translate("MainWindow", "Find in DB", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Back to DB", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "Connect DB", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "Add to DB", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Current Cars", nullptr));
        radioButton_20->setText(QApplication::translate("MainWindow", "Owner", nullptr));
        radioButton_21->setText(QApplication::translate("MainWindow", "Owner's EMail", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "Find in DB", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "Back to DB", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        radioButton_23->setText(QApplication::translate("MainWindow", "OwnerID", nullptr));
        radioButton_22->setText(QApplication::translate("MainWindow", "Owner's cars by FullName", nullptr));
        radioButton_24->setText(QApplication::translate("MainWindow", "Owner's cars by Email", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "Connect DB", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Owners", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H