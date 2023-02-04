/********************************************************************************
** Form generated from reading UI file 'view_employee.ui'
**
** Created by: Qt User Interface Compiler version 5.12.11
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_VIEW_EMPLOYEE_H
#define UI_VIEW_EMPLOYEE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>

QT_BEGIN_NAMESPACE

class Ui_view_employee
{
public:
    QLabel *label;
    QTableView *tableView;
    QLabel *label_2;
    QPushButton *load_button;
    QPushButton *back_button;
    QLabel *label_3;

    void setupUi(QDialog *view_employee)
    {
        if (view_employee->objectName().isEmpty())
            view_employee->setObjectName(QString::fromUtf8("view_employee"));
        view_employee->resize(400, 300);
        label = new QLabel(view_employee);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 401, 301));
        label->setStyleSheet(QString::fromUtf8("#label {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: gray;\n"
"selection-background-color: darkgray;\n"
"}"));
        tableView = new QTableView(view_employee);
        tableView->setObjectName(QString::fromUtf8("tableView"));
        tableView->setGeometry(QRect(10, 40, 361, 201));
        label_2 = new QLabel(view_employee);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 10, 171, 21));
        label_2->setStyleSheet(QString::fromUtf8("#label_2 {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: white;\n"
"selection-background-color: darkgray;\n"
"}"));
        load_button = new QPushButton(view_employee);
        load_button->setObjectName(QString::fromUtf8("load_button"));
        load_button->setGeometry(QRect(40, 252, 75, 31));
        load_button->setStyleSheet(QString::fromUtf8("#pushButton{\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: skyblue;\n"
"selection-background-color: darkgray;\n"
"}"));
        back_button = new QPushButton(view_employee);
        back_button->setObjectName(QString::fromUtf8("back_button"));
        back_button->setGeometry(QRect(240, 252, 75, 31));
        back_button->setStyleSheet(QString::fromUtf8("#pushButton_2 {\n"
"border: 2px solid gray;\n"
"border-radius: 10px;\n"
"padding: 0 8px;\n"
"background: green;\n"
"selection-background-color: darkgray;\n"
"}"));
        label_3 = new QLabel(view_employee);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(310, 10, 71, 16));

        retranslateUi(view_employee);

        QMetaObject::connectSlotsByName(view_employee);
    } // setupUi

    void retranslateUi(QDialog *view_employee)
    {
        view_employee->setWindowTitle(QApplication::translate("view_employee", "Dialog", nullptr));
        label->setText(QString());
        label_2->setText(QApplication::translate("view_employee", "View Employee's information", nullptr));
        load_button->setText(QApplication::translate("view_employee", "Load Table", nullptr));
        back_button->setText(QApplication::translate("view_employee", "Back", nullptr));
        label_3->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class view_employee: public Ui_view_employee {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_VIEW_EMPLOYEE_H
