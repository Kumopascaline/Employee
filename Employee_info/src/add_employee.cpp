#include "include\add_employee.h"
#include "ui_add_employee.h"
#include <QMessageBox>

add_employee::add_employee(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::add_employee)
{
    ui->setupUi(this);

    if(!connOpen()){
       ui->label_7->setText("Failed to open databsae");
    }
    else{
        ui->label_7->setText("Connected........");
    }
}

add_employee::~add_employee()
{
    delete ui;
}

void add_employee::on_addButton_clicked()
{
    QString Employee_ID,Name,Age,Phone_number;
    Employee_ID=ui->lineEdit->text();
    Name=ui->lineEdit_2->text();
    Age=ui->lineEdit_3->text();
    Phone_number=ui->lineEdit_4->text();


    if(!connOpen()){
        qDebug()<<"Failed to open the database";
        return;
    }
    else{
         connOpen();
        QSqlQuery qry;
         qry.prepare("insert into Employees (Employee_ID,Name,Age, Phone_number) values('"+Employee_ID+"','"+Name+"','"+Age+"','"+Phone_number+"')");
        //qry.addBindValue(Name);
        //qry.addBindValue(Age);
        //qry.addBindValue(Phone_number);
         if(qry.exec())
        {
            QMessageBox::critical(this,tr("Saved"),tr("Data is saved"));
            connClose();
        }
        else{
            QMessageBox::critical(this,tr("error"),qry.lastError().text());
        }

        }
}


void add_employee::on_backButton_clicked()
{
    this->close();

    MainWindow* mainWin = new MainWindow();
    mainWin->setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    mainWin->show();

}

