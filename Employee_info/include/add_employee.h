#ifndef ADD_EMPLOYEE_H
#define ADD_EMPLOYEE_H
#include "mainwindow.h"

#include <QDialog>
#include <QtSql>
#include <QSqlDatabase>
#include <QFileInfo>

namespace Ui {
class add_employee;
}

class add_employee : public QDialog
{
    Q_OBJECT
public:
     QSqlDatabase sqlitedb;

    void connClose()
    {
        sqlitedb.close();
        sqlitedb.removeDatabase(QSqlDatabase::defaultConnection);
    }
    bool connOpen(){
        sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
       sqlitedb.setDatabaseName("C:/Users/C PC/Desktop/TRY/Employee/Employee_info/resources/employeedatabase.sqlite");
       if(!sqlitedb.open()){
          qDebug()<<("Failed to open databsae");
          return false;
       }
       else{
           qDebug()<<("Connected........");
           return true;
       }
    }

public:
    explicit add_employee(QWidget *parent = nullptr);
    ~add_employee();

private slots:
    void on_addButton_clicked();

    void on_backButton_clicked();

private:
    Ui::add_employee *ui;

};

#endif // ADD_EMPLOYEE_H
