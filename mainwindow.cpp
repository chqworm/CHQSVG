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


//Other write something. ok 
//other write again

void MainWindow::pushButtonclicked()
{
   QMessageBox::information(this,"","I create");
}

