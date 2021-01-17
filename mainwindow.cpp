#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked()),this,SLOT(pushButtonclicked()));

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::pushButtonclicked()
{
   QMessageBox::information(this,"","I create yyyyyy");

   //master: I write this XXX;
}
