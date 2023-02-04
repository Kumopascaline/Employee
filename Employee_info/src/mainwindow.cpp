#include "include\mainwindow.h"
#include "ui_mainwindow.h"
#include "include\add_employee.h"
#include "include\view_employee.h"
#include "include\update_employee.h"
#include "include\delete_employee.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}





void MainWindow::on_add_Employee_clicked()
{
    hide();
  add_employee add_employee;
  add_employee.setModal(true);
  add_employee.exec();

}


void MainWindow::on_view_Employee_clicked()
{
    hide();
  view_employee view_employee;
  view_employee.setModal(true);
  view_employee.exec();
}


void MainWindow::on_update_Employee_clicked()
{
    hide();
  update_employee update_employee;
  update_employee.setModal(true);
  update_employee.exec();
}


void MainWindow::on_delete_Employee_clicked()
{
    hide();
 delete_Employee delete_employee;
 delete_employee.setModal(true);
  delete_employee.exec();
}

