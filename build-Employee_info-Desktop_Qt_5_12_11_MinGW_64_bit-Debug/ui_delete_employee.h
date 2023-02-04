/********************************************************************************
** Form generated from reading UI file 'delete_employee.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DELETE_EMPLOYEE_H
#define UI_DELETE_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_delete_Employee
{
public:
    QLabel *label;
    QTableView *tableView;
    QPushButton *loadTable;
    QPushButton *delete_2;
    QPushButton *backButton_4;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *lineEdit;

    void setupUi(QDialog *delete_Employee)
    {
        if (delete_Employee->objectName().isEmpty())
            delete_Employee->setObjectName(QString::fromUtf8("delete_Employee"));
        delete_Employee->resize(400, 300);
        label = new QLabel(delete_Employee);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 401, 301));
        label->setStyleSheet(QString::fromUtf8("#label{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background:gray;\n"
"selection-background-color: darkgray;\n"
"}"));
        tableView = new QTableView(delete_Employee);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(20, 30, 341, 131));
        loadTable = new QPushButton(delete_Employee);
        loadTable->setObjectName(QString::fromUtf8("loadTable"));
        loadTable->setGeometry(QRect(30, 242, 75, 31));
        loadTable->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background:skyblue;\n"
"selection-background-color: darkgray;\n"
"}"));
        delete_2 = new QPushButton(delete_Employee);
        delete_2->setObjectName(QString::fromUtf8("delete_2"));
        delete_2->setGeometry(QRect(160, 242, 75, 31));
        delete_2->setStyleSheet(QString::fromUtf8("#pushButton_2{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background:red;\n"
"selection-background-color: darkgray;\n"
"}"));
        backButton_4 = new QPushButton(delete_Employee);
        backButton_4->setObjectName(QString::fromUtf8("backButton_4"));
        backButton_4->setGeometry(QRect(280, 242, 75, 31));
        backButton_4->setStyleSheet(QString::fromUtf8("#pushButton_3{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background:green;\n"
"selection-background-color: darkgray;\n"
"}"));
        label_2 = new QLabel(delete_Employee);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 0, 161, 16));
        label_3 = new QLabel(delete_Employee);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(290, 10, 101, 16));
        label_4 = new QLabel(delete_Employee);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(20, 180, 81, 16));
        lineEdit = new QLineEdit(delete_Employee);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(110, 180, 151, 21));

        retranslateUi(delete_Employee);

        QMetaObject::connectSlotsByName(delete_Employee);
    } // setupUi

    void retranslateUi(QDialog *delete_Employee)
    {
        delete_Employee->setWindowTitle(QApplication::translate("delete_Employee", "Dialog", nullptr));
        label->setText(QString());
        loadTable->setText(QApplication::translate("delete_Employee", "Load Table", nullptr));
        delete_2->setText(QApplication::translate("delete_Employee", "Delete", nullptr));
        backButton_4->setText(QApplication::translate("delete_Employee", "Back", nullptr));
        label_2->setText(QApplication::translate("delete_Employee", "Deleting employee's details", nullptr));
        label_3->setText(QString());
        label_4->setText(QApplication::translate("delete_Employee", "Employee_ID", nullptr));
    } // retranslateUi

};

namespace Ui {
    class delete_Employee: public Ui_delete_Employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DELETE_EMPLOYEE_H
