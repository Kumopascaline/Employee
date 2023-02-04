/********************************************************************************
** Form generated from reading UI file 'add_employee.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ADD_EMPLOYEE_H
#define UI_ADD_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_add_employee
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLineEdit *lineEdit_4;
    QPushButton *addButton;
    QPushButton *backButton;
    QLabel *label_7;

    void setupUi(QDialog *add_employee)
    {
        if (add_employee->objectName().isEmpty())
            add_employee->setObjectName(QString::fromUtf8("add_employee"));
        add_employee->resize(400, 300);
        label = new QLabel(add_employee);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(-10, 0, 411, 321));
        label->setStyleSheet(QString::fromUtf8("#label {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: darkgray;\n"
"selection-background-color: darkgray;\n"
"}"));
        label_2 = new QLabel(add_employee);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 10, 161, 21));
        label_2->setStyleSheet(QString::fromUtf8("#label_2 {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: darkgray;\n"
"}"));
        label_3 = new QLabel(add_employee);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(50, 80, 81, 16));
        label_4 = new QLabel(add_employee);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(50, 130, 47, 13));
        label_5 = new QLabel(add_employee);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(50, 180, 47, 13));
        label_6 = new QLabel(add_employee);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(50, 230, 81, 16));
        lineEdit = new QLineEdit(add_employee);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(160, 70, 181, 31));
        lineEdit_2 = new QLineEdit(add_employee);
        lineEdit_2->setObjectName(QString::fromUtf8("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(160, 120, 181, 31));
        lineEdit_3 = new QLineEdit(add_employee);
        lineEdit_3->setObjectName(QString::fromUtf8("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(160, 170, 181, 31));
        lineEdit_4 = new QLineEdit(add_employee);
        lineEdit_4->setObjectName(QString::fromUtf8("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(160, 220, 181, 31));
        addButton = new QPushButton(add_employee);
        addButton->setObjectName(QString::fromUtf8("addButton"));
        addButton->setGeometry(QRect(260, 270, 75, 23));
        addButton->setStyleSheet(QString::fromUtf8("#pushButton {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: skyblue;\n"
"selection-background-color: darkgray;\n"
"}"));
        backButton = new QPushButton(add_employee);
        backButton->setObjectName(QString::fromUtf8("backButton"));
        backButton->setGeometry(QRect(50, 270, 75, 23));
        backButton->setStyleSheet(QString::fromUtf8("#pushButton_2 {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: green;\n"
"selection-background-color: darkgray;\n"
"}"));
        label_7 = new QLabel(add_employee);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        label_7->setGeometry(QRect(320, 0, 71, 20));

        retranslateUi(add_employee);

        QMetaObject::connectSlotsByName(add_employee);
    } // setupUi

    void retranslateUi(QDialog *add_employee)
    {
        add_employee->setWindowTitle(QApplication::translate("add_employee", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("add_employee", "Adding a new Employee", nullptr));
        label_3->setText(QApplication::translate("add_employee", "Employee_ID", nullptr));
        label_4->setText(QApplication::translate("add_employee", "Name", nullptr));
        label_5->setText(QApplication::translate("add_employee", "Age", nullptr));
        label_6->setText(QApplication::translate("add_employee", "Phone_number", nullptr));
        addButton->setText(QApplication::translate("add_employee", "Add", nullptr));
        backButton->setText(QApplication::translate("add_employee", "Back", nullptr));
        label_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class add_employee: public Ui_add_employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ADD_EMPLOYEE_H
