#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


private slots:
    void on_add_Employee_clicked();

    void on_view_Employee_clicked();

    void on_update_Employee_clicked();

    void on_delete_Employee_clicked();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
