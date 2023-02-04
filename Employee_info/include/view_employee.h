#ifndef VIEW_EMPLOYEE_H
#define VIEW_EMPLOYEE_H
#include "mainwindow.h"
#include <QDialog>

namespace Ui {
class view_employee;
}

class view_employee : public QDialog
{
    Q_OBJECT

public:
    explicit view_employee(QWidget *parent = nullptr);
    ~view_employee();

private slots:
    void on_load_button_clicked();

    void on_back_button_clicked();

private:
    Ui::view_employee *ui;
};

#endif // VIEW_EMPLOYEE_H
