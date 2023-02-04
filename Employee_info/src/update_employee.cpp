#include "include\update_employee.h"
#include "include\mainwindow.h"
#include "ui_update_employee.h"
#include "include\add_employee.h"
#include <QMessageBox>


update_employee::update_employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::update_employee)
{
    ui->setupUi(this);

     add_employee conn;
    if(!conn.connOpen()){
       ui->label_7->setText("Failed to open databsae");
    }
    else{
        ui->label_7->setText("Connected........");
    }
}

update_employee::~update_employee()
{
    delete ui;
}

void update_employee::on_updateButton_clicked()
{
    add_employee conn;
   QString Employee_ID,Name,Age,Phone_number;
   Employee_ID=ui->lineEdit->text();
   Name=ui->lineEdit_4->text();
   Age=ui->lineEdit_2->text();
   Phone_number=ui->lineEdit_3->text();

   if(!conn.connOpen()){
       qDebug()<<"Failed to open the database";
       return;
   }
   else{
       QSqlQuery qry;
        qry.prepare("update Employees set Employee_ID='"+Employee_ID+"',Name='"+Name+"',Age='"+Age+"',Phone_number='"+Phone_number+"'where Employee_ID='"+Employee_ID+"' ");
       if(qry.exec())
       {
           QMessageBox::critical(this,tr("Edit"),tr("Data is updated"));
           conn.connClose();
       }
       else{
           QMessageBox::critical(this,tr("error"),qry.lastError().text());
       }

       }

}


void update_employee::on_backButton_3_clicked()
{
    this->close();

    MainWindow* mainWin = new MainWindow();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();
}


void update_employee::on_pushButton_clicked()
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

