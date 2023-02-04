#ifndef UPDATE_EMPLOYEE_H
#define UPDATE_EMPLOYEE_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class update_employee;
}

class update_employee : public QDialog
{
    Q_OBJECT

public:
    explicit update_employee(QWidget *parent = nullptr);
    ~update_employee();

private slots:
    void on_updateButton_clicked();

    void on_backButton_3_clicked();

    void on_pushButton_clicked();

private:
    Ui::update_employee *ui;
};

#endif // UPDATE_EMPLOYEE_H
