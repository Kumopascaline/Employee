#ifndef DELETE_EMPLOYEE_H
#define DELETE_EMPLOYEE_H


#include <QDialog>

namespace Ui {
class delete_Employee;
}

class delete_Employee : public QDialog
{
    Q_OBJECT

public:
    explicit delete_Employee(QWidget *parent = nullptr);
    ~delete_Employee();

private slots:
    void on_loadTable_clicked();

    void on_delete_2_clicked();

    void on_backButton_4_clicked();

private:
    Ui::delete_Employee *ui;
};

#endif // DELETE_EMPLOYEE_H
