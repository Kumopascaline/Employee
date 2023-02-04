#include "include\delete_employee.h"
#include "ui_delete_employee.h"
#include "include\mainwindow.h"
#include "include\add_employee.h"
#include <QMessageBox>

delete_Employee::delete_Employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::delete_Employee)
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

delete_Employee::~delete_Employee()
{
    delete ui;
}

void delete_Employee::on_loadTable_clicked()
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


void delete_Employee::on_delete_2_clicked()
{
    add_employee conn;
   QString Employee_ID,Name,Age,Phone_number;
   Employee_ID=ui->lineEdit->text();

   if(!conn.connOpen()){
       qDebug()<<"Failed to open the database";
       return;
   }
   else{
       QSqlQuery qry;
        qry.prepare("delete from Employee where Employee_ID='"+Employee_ID+"'");
       if(qry.exec())
       {
           QMessageBox::critical(this,tr("Delete"),tr("Deleted"));
           conn.connClose();
       }
       else{
           QMessageBox::critical(this,tr("error"),qry.lastError().text());
       }

       }

}


void delete_Employee::on_backButton_4_clicked()
{
    this->close();

    MainWindow* mainWin = new MainWindow();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();
}

