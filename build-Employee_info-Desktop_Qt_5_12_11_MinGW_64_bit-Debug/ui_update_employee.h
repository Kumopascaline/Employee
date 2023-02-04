/********************************************************************************
** Form generated from reading UI file 'update_employee.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_UPDATE_EMPLOYEE_H
#define UI_UPDATE_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_update_employee
{
public:
    QLabel *label;
    QTableView *tableView;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *pushButton;
    QPushButton *updateButton;
    QPushButton *backButton_3;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QDialog *update_employee)
    {
        if (update_employee->objectName().isEmpty())
            update_employee->setObjectName(QString::fromUtf8("update_employee"));
        update_employee->resize(400, 300);
        label = new QLabel(update_employee);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 401, 301));
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background:skyblue;\n"
"selection-background-color: darkgray;\n"
"}"));
        tableView = new QTableView(update_employee);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 30, 351, 121));
        label_2 = new QLabel(update_employee);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 160, 71, 16));
        label_3 = new QLabel(update_employee);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(20, 210, 47, 13));
        label_4 = new QLabel(update_employee);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(230, 160, 47, 13));
        label_5 = new QLabel(update_employee);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(200, 210, 71, 16));
        lineEdit = new QLineEdit(update_employee);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(100, 160, 113, 20));
        lineEdit_2 = new QLineEdit(update_employee);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(270, 160, 113, 20));
        lineEdit_3 = new QLineEdit(update_employee);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(280, 210, 113, 20));
        lineEdit_4 = new QLineEdit(update_employee);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(70, 210, 113, 20));
        pushButton = new QPushButton(update_employee);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(20, 260, 75, 23));
        pushButton->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background:gray;\n"
"selection-background-color: darkgray;\n"
"}"));
        updateButton = new QPushButton(update_employee);
        updateButton->setObjectName(QString::fromUtf8("updateButton"));
        updateButton->setGeometry(QRect(150, 260, 75, 23));
        updateButton->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background:pink;\n"
"selection-background-color: darkgray;\n"
"}"));
        backButton_3 = new QPushButton(update_employee);
        backButton_3->setObjectName(QString::fromUtf8("backButton_3"));
        backButton_3->setGeometry(QRect(290, 260, 75, 23));
        backButton_3->setStyleSheet(QString::fromUtf8("#pushButton_3{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background:green;\n"
"selection-background-color: darkgray;\n"
"}"));
        label_6 = new QLabel(update_employee);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 10, 171, 16));
        label_6->setStyleSheet(QString::fromUtf8("#label_6{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background:white;\n"
"selection-background-color: darkgray;\n"
"}"));
        label_7 = new QLabel(update_employee);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(290, 10, 101, 16));

        retranslateUi(update_employee);

        QMetaObject::connectSlotsByName(update_employee);
    } // setupUi

    void retranslateUi(QDialog *update_employee)
    {
        update_employee->setWindowTitle(QApplication::translate("update_employee", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("update_employee", "Employee_ID", nullptr));
        label_3->setText(QApplication::translate("update_employee", "Name", nullptr));
        label_4->setText(QApplication::translate("update_employee", "Age", nullptr));
        label_5->setText(QApplication::translate("update_employee", "Phone_number", nullptr));
        pushButton->setText(QApplication::translate("update_employee", "Load Table", nullptr));
        updateButton->setText(QApplication::translate("update_employee", "Update", nullptr));
        backButton_3->setText(QApplication::translate("update_employee", "Back", nullptr));
        label_6->setText(QApplication::translate("update_employee", "Updating Employee's details", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class update_employee: public Ui_update_employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_UPDATE_EMPLOYEE_H
