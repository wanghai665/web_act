#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->tableWidget->setColumnCount(7);
    QStringList header;
    header<<tr("手机号")<<tr("自设")<<tr("123456")<<tr("密码后六")<<tr("123321")<<tr("147258")<<tr("MAC");
    ui->tableWidget->setHorizontalHeaderLabels(header);

}

MainWindow::~MainWindow()
{
    delete ui;
}
