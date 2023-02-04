/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QPushButton *add_Employee;
    QPushButton *view_Employee;
    QPushButton *update_Employee;
    QPushButton *delete_Employee;
    QLabel *label_2;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 10, 351, 271));
        label->setStyleSheet(QString::fromUtf8("#label {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: gray;\n"
"selection-background-color: darkgray;\n"
"}"));
        add_Employee = new QPushButton(centralwidget);
        add_Employee->setObjectName(QString::fromUtf8("add_Employee"));
        add_Employee->setGeometry(QRect(110, 50, 131, 31));
        add_Employee->setStyleSheet(QString::fromUtf8("#pushButton {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: darkgray;\n"
"}"));
        view_Employee = new QPushButton(centralwidget);
        view_Employee->setObjectName(QString::fromUtf8("view_Employee"));
        view_Employee->setGeometry(QRect(110, 110, 131, 31));
        view_Employee->setStyleSheet(QString::fromUtf8("#pushButton_2 {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: darkgray;\n"
"}"));
        update_Employee = new QPushButton(centralwidget);
        update_Employee->setObjectName(QString::fromUtf8("update_Employee"));
        update_Employee->setGeometry(QRect(110, 170, 131, 31));
        update_Employee->setStyleSheet(QString::fromUtf8("#pushButton_3 {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background:white;\n"
"selection-background-color: darkgray;\n"
"}"));
        delete_Employee = new QPushButton(centralwidget);
        delete_Employee->setObjectName(QString::fromUtf8("delete_Employee"));
        delete_Employee->setGeometry(QRect(110, 230, 131, 31));
        delete_Employee->setStyleSheet(QString::fromUtf8("#pushButton_4 {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: darkgray;\n"
"}"));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 20, 141, 16));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 800, 21));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QString());
        add_Employee->setText(QApplication::translate("MainWindow", "Add Employee", nullptr));
        view_Employee->setText(QApplication::translate("MainWindow", "View Employees", nullptr));
        update_Employee->setText(QApplication::translate("MainWindow", "Update Employee", nullptr));
        delete_Employee->setText(QApplication::translate("MainWindow", "Delete Employee", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "The Employee information", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
