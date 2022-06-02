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
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QTableView *tableView_2;
    QPushButton *pushButton_11;
    QPushButton *pushButton_14;
    QWidget *widget1;
    QHBoxLayout *horizontalLayout_2;
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
    QWidget *tab_3;
    QTextEdit *textEdit_3;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QTableView *tableView_3;
    QPushButton *pushButton_10;
    QPushButton *pushButton_15;
    QWidget *widget2;
    QHBoxLayout *horizontalLayout_3;
    QRadioButton *radioButton_23;
    QRadioButton *radioButton_20;
    QRadioButton *radioButton_21;
    QRadioButton *radioButton_22;
    QRadioButton *radioButton_24;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(818, 517);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(0, 0, 1787, 731));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 811, 341));
        QFont font;
        font.setPointSize(9);
        tableView->setFont(font);
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(680, 350, 101, 21));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(560, 350, 101, 21));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(30, 350, 161, 21));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(320, 350, 101, 21));
        pushButton_12 = new QPushButton(tab);
        pushButton_12->setObjectName(QString::fromUtf8("pushButton_12"));
        pushButton_12->setGeometry(QRect(200, 350, 101, 21));
        pushButton_13 = new QPushButton(tab);
        pushButton_13->setObjectName(QString::fromUtf8("pushButton_13"));
        pushButton_13->setGeometry(QRect(440, 350, 101, 21));
        widget = new QWidget(tab);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(91, 380, 606, 21));
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
        textEdit_2->setGeometry(QRect(30, 350, 161, 21));
        pushButton_4 = new QPushButton(tab_2);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));
        pushButton_4->setGeometry(QRect(320, 350, 101, 21));
        pushButton_5 = new QPushButton(tab_2);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));
        pushButton_5->setGeometry(QRect(560, 350, 101, 21));
        pushButton_6 = new QPushButton(tab_2);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));
        pushButton_6->setGeometry(QRect(680, 350, 101, 21));
        tableView_2 = new QTableView(tab_2);
        tableView_2->setObjectName(QString::fromUtf8("tableView_2"));
        tableView_2->setGeometry(QRect(0, 0, 811, 341));
        pushButton_11 = new QPushButton(tab_2);
        pushButton_11->setObjectName(QString::fromUtf8("pushButton_11"));
        pushButton_11->setGeometry(QRect(200, 350, 101, 21));
        pushButton_14 = new QPushButton(tab_2);
        pushButton_14->setObjectName(QString::fromUtf8("pushButton_14"));
        pushButton_14->setGeometry(QRect(440, 350, 101, 21));
        widget1 = new QWidget(tab_2);
        widget1->setObjectName(QString::fromUtf8("widget1"));
        widget1->setGeometry(QRect(0, 380, 813, 21));
        horizontalLayout_2 = new QHBoxLayout(widget1);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        radioButton_9 = new QRadioButton(widget1);
        radioButton_9->setObjectName(QString::fromUtf8("radioButton_9"));

        horizontalLayout_2->addWidget(radioButton_9);

        radioButton_10 = new QRadioButton(widget1);
        radioButton_10->setObjectName(QString::fromUtf8("radioButton_10"));

        horizontalLayout_2->addWidget(radioButton_10);

        radioButton_11 = new QRadioButton(widget1);
        radioButton_11->setObjectName(QString::fromUtf8("radioButton_11"));

        horizontalLayout_2->addWidget(radioButton_11);

        radioButton_12 = new QRadioButton(widget1);
        radioButton_12->setObjectName(QString::fromUtf8("radioButton_12"));

        horizontalLayout_2->addWidget(radioButton_12);

        radioButton_13 = new QRadioButton(widget1);
        radioButton_13->setObjectName(QString::fromUtf8("radioButton_13"));

        horizontalLayout_2->addWidget(radioButton_13);

        radioButton_14 = new QRadioButton(widget1);
        radioButton_14->setObjectName(QString::fromUtf8("radioButton_14"));

        horizontalLayout_2->addWidget(radioButton_14);

        radioButton_15 = new QRadioButton(widget1);
        radioButton_15->setObjectName(QString::fromUtf8("radioButton_15"));

        horizontalLayout_2->addWidget(radioButton_15);

        radioButton_16 = new QRadioButton(widget1);
        radioButton_16->setObjectName(QString::fromUtf8("radioButton_16"));

        horizontalLayout_2->addWidget(radioButton_16);

        radioButton_17 = new QRadioButton(widget1);
        radioButton_17->setObjectName(QString::fromUtf8("radioButton_17"));

        horizontalLayout_2->addWidget(radioButton_17);

        radioButton_18 = new QRadioButton(widget1);
        radioButton_18->setObjectName(QString::fromUtf8("radioButton_18"));

        horizontalLayout_2->addWidget(radioButton_18);

        radioButton_19 = new QRadioButton(widget1);
        radioButton_19->setObjectName(QString::fromUtf8("radioButton_19"));

        horizontalLayout_2->addWidget(radioButton_19);

        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        textEdit_3 = new QTextEdit(tab_3);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));
        textEdit_3->setGeometry(QRect(30, 350, 161, 21));
        pushButton_7 = new QPushButton(tab_3);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));
        pushButton_7->setGeometry(QRect(320, 350, 101, 21));
        pushButton_8 = new QPushButton(tab_3);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));
        pushButton_8->setGeometry(QRect(560, 350, 101, 21));
        pushButton_9 = new QPushButton(tab_3);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));
        pushButton_9->setGeometry(QRect(680, 350, 101, 21));
        tableView_3 = new QTableView(tab_3);
        tableView_3->setObjectName(QString::fromUtf8("tableView_3"));
        tableView_3->setGeometry(QRect(0, 0, 811, 341));
        pushButton_10 = new QPushButton(tab_3);
        pushButton_10->setObjectName(QString::fromUtf8("pushButton_10"));
        pushButton_10->setGeometry(QRect(200, 350, 101, 21));
        pushButton_15 = new QPushButton(tab_3);
        pushButton_15->setObjectName(QString::fromUtf8("pushButton_15"));
        pushButton_15->setGeometry(QRect(440, 350, 101, 21));
        widget2 = new QWidget(tab_3);
        widget2->setObjectName(QString::fromUtf8("widget2"));
        widget2->setGeometry(QRect(160, 380, 519, 21));
        horizontalLayout_3 = new QHBoxLayout(widget2);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        radioButton_23 = new QRadioButton(widget2);
        radioButton_23->setObjectName(QString::fromUtf8("radioButton_23"));

        horizontalLayout_3->addWidget(radioButton_23);

        radioButton_20 = new QRadioButton(widget2);
        radioButton_20->setObjectName(QString::fromUtf8("radioButton_20"));

        horizontalLayout_3->addWidget(radioButton_20);

        radioButton_21 = new QRadioButton(widget2);
        radioButton_21->setObjectName(QString::fromUtf8("radioButton_21"));

        horizontalLayout_3->addWidget(radioButton_21);

        radioButton_22 = new QRadioButton(widget2);
        radioButton_22->setObjectName(QString::fromUtf8("radioButton_22"));

        horizontalLayout_3->addWidget(radioButton_22);

        radioButton_24 = new QRadioButton(widget2);
        radioButton_24->setObjectName(QString::fromUtf8("radioButton_24"));

        horizontalLayout_3->addWidget(radioButton_24);

        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 818, 20));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        tabWidget->setCurrentIndex(0);


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
        pushButton_4->setText(QApplication::translate("MainWindow", "Find in DB", nullptr));
        pushButton_5->setText(QApplication::translate("MainWindow", "Back to DB", nullptr));
        pushButton_6->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_11->setText(QApplication::translate("MainWindow", "Connect DB", nullptr));
        pushButton_14->setText(QApplication::translate("MainWindow", "Add to DB", nullptr));
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
        radioButton_19->setText(QApplication::translate("MainWindow", "Power", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Current Cars", nullptr));
        pushButton_7->setText(QApplication::translate("MainWindow", "Find in DB", nullptr));
        pushButton_8->setText(QApplication::translate("MainWindow", "Back to DB", nullptr));
        pushButton_9->setText(QApplication::translate("MainWindow", "Exit", nullptr));
        pushButton_10->setText(QApplication::translate("MainWindow", "Connect DB", nullptr));
        pushButton_15->setText(QApplication::translate("MainWindow", "Add to DB", nullptr));
        radioButton_23->setText(QApplication::translate("MainWindow", "OwnerID", nullptr));
        radioButton_20->setText(QApplication::translate("MainWindow", "Owner", nullptr));
        radioButton_21->setText(QApplication::translate("MainWindow", "Owner's EMail", nullptr));
        radioButton_22->setText(QApplication::translate("MainWindow", "Owner's cars by FullName", nullptr));
        radioButton_24->setText(QApplication::translate("MainWindow", "Owner's cars by Email", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Owners", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
