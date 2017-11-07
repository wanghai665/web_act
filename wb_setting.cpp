#include "wb_setting.h"
#include "ui_wb_setting.h"

wb_setting::wb_setting(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::wb_setting)
{
    ui->setupUi(this);
}

wb_setting::~wb_setting()
{
    delete ui;
}

void wb_setting::on_pushButton_clicked()
{
 this->name_ppoe=this->ui->lineEdit->text();
 this->reg_lan=this->ui->lineEdit_2->text();
}
