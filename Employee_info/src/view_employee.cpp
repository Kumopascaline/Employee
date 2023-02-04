#include "include\view_employee.h"
#include "include\mainwindow.h"
#include "ui_view_employee.h"
#include "include\add_employee.h"
#include <QMessageBox>


view_employee::view_employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::view_employee)
{
    ui->setupUi(this);

     add_employee conn;
    if(!conn.connOpen()){
       ui->label_3->setText("Failed to open databsae");
    }
    else{
        ui->label_3->setText("Connected........");
    }
}

view_employee::~view_employee()
{
    delete ui;
}

void view_employee::on_load_button_clicked()
{
    add_employee conn;
    QSqlQueryModel * modal = new QSqlQueryModel();


    if(!conn.connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    else{
          QSqlQuery*qry =new QSqlQuery(conn.sqlitedb);
          qry->prepare("select * from Employees");
          qry->exec();

          modal->setQuery(*qry);
          ui->tableView->setModel(modal);
          if(qry->exec())
          {

              conn.connClose();
              qDebug()<<(modal->rowCount());
          }
          else{
              QMessageBox::critical(this,tr("error"),qry->lastError().text());
          }



        }


}


void view_employee::on_back_button_clicked()
{
    this->close();

    MainWindow* mainWin = new MainWindow();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();
}

