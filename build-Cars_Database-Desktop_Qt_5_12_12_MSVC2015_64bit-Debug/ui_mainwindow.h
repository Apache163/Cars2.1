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
    QRadioButton *radioButton_3;
    QRadioButton *radioButton_4;
    QPushButton *pushButton_2;
    QTextEdit *textEdit;
    QRadioButton *radioButton;
    QRadioButton *radioButton_5;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_6;
    QRadioButton *radioButton_7;
    QRadioButton *radioButton_8;
    QPushButton *pushButton;
    QWidget *tab_2;
    QWidget *tab_3;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(883, 708);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        tabWidget = new QTabWidget(centralwidget);
        tabWidget->setObjectName(QString::fromUtf8("tabWidget"));
        tabWidget->setGeometry(QRect(10, 0, 871, 671));
        tab = new QWidget();
        tab->setObjectName(QString::fromUtf8("tab"));
        tableView = new QTableView(tab);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(0, 0, 861, 591));
        pushButton_3 = new QPushButton(tab);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));
        pushButton_3->setGeometry(QRect(540, 620, 101, 21));
        radioButton_3 = new QRadioButton(tab);
        radioButton_3->setObjectName(QString::fromUtf8("radioButton_3"));
        radioButton_3->setGeometry(QRect(250, 600, 84, 19));
        radioButton_4 = new QRadioButton(tab);
        radioButton_4->setObjectName(QString::fromUtf8("radioButton_4"));
        radioButton_4->setGeometry(QRect(310, 600, 84, 19));
        pushButton_2 = new QPushButton(tab);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(420, 620, 101, 21));
        textEdit = new QTextEdit(tab);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(160, 620, 101, 21));
        radioButton = new QRadioButton(tab);
        radioButton->setObjectName(QString::fromUtf8("radioButton"));
        radioButton->setGeometry(QRect(120, 600, 84, 19));
        radioButton_5 = new QRadioButton(tab);
        radioButton_5->setObjectName(QString::fromUtf8("radioButton_5"));
        radioButton_5->setGeometry(QRect(400, 600, 121, 19));
        radioButton_2 = new QRadioButton(tab);
        radioButton_2->setObjectName(QString::fromUtf8("radioButton_2"));
        radioButton_2->setGeometry(QRect(190, 600, 84, 19));
        radioButton_6 = new QRadioButton(tab);
        radioButton_6->setObjectName(QString::fromUtf8("radioButton_6"));
        radioButton_6->setGeometry(QRect(490, 600, 84, 19));
        radioButton_7 = new QRadioButton(tab);
        radioButton_7->setObjectName(QString::fromUtf8("radioButton_7"));
        radioButton_7->setGeometry(QRect(570, 600, 84, 19));
        radioButton_8 = new QRadioButton(tab);
        radioButton_8->setObjectName(QString::fromUtf8("radioButton_8"));
        radioButton_8->setGeometry(QRect(630, 600, 101, 19));
        pushButton = new QPushButton(tab);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(290, 620, 101, 21));
        tabWidget->addTab(tab, QString());
        tab_2 = new QWidget();
        tab_2->setObjectName(QString::fromUtf8("tab_2"));
        tabWidget->addTab(tab_2, QString());
        tab_3 = new QWidget();
        tab_3->setObjectName(QString::fromUtf8("tab_3"));
        tabWidget->addTab(tab_3, QString());
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 883, 20));
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
        radioButton_3->setText(QApplication::translate("MainWindow", "MODEL", nullptr));
        radioButton_4->setText(QApplication::translate("MainWindow", "MODEL YEAR", nullptr));
        pushButton_2->setText(QApplication::translate("MainWindow", "Back to DB", nullptr));
        radioButton->setText(QApplication::translate("MainWindow", "CAR_ID", nullptr));
        radioButton_5->setText(QApplication::translate("MainWindow", "FIRST MODEL", nullptr));
        radioButton_2->setText(QApplication::translate("MainWindow", "BRAND", nullptr));
        radioButton_6->setText(QApplication::translate("MainWindow", "BODY TYPE", nullptr));
        radioButton_7->setText(QApplication::translate("MainWindow", "DOORS", nullptr));
        radioButton_8->setText(QApplication::translate("MainWindow", "ENGINE POWER", nullptr));
        pushButton->setText(QApplication::translate("MainWindow", "Find in DB", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab), QApplication::translate("MainWindow", "Brand List", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_2), QApplication::translate("MainWindow", "Current Cars", nullptr));
        tabWidget->setTabText(tabWidget->indexOf(tab_3), QApplication::translate("MainWindow", "Owners", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
