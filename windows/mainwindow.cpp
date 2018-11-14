#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QDialog"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButton->setText("新窗口1"); // 修改界面上按钮的文字
    ui->pushButton_2->setText("你有毒"); // 还得先运行，再修改才不会飘红，真是有毒
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_2_clicked()
{
    QDialog *dlg = new QDialog(this);
    dlg->show();
}
