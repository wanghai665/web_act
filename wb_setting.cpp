#include "wb_setting.h"
#include "ui_wb_setting.h"

wb_setting::wb_setting(QWidget *parent) :
    QWidget(parent)
{
//初始化界面
   this->setFixedSize(320,240);
   this->setWindowTitle(tr("设置参数"));
    //设置布局
   this->my_main_layout=new QVBoxLayout();
   this->my_top_layout=new QHBoxLayout();
    this->my_mid_layout=new QHBoxLayout();
    this->my_buttom_layout=new QHBoxLayout();
    this->my_main_layout->addLayout(this->my_top_layout);
    this->my_main_layout->addLayout(this->my_mid_layout);
    this->my_main_layout->addLayout(this->my_buttom_layout);
    this->setLayout(this->my_main_layout);
   //设置上部分
    this->my_lineedit_ppoe=new QComboBox();
    this->my_lable_ppoe=new QLabel(tr("宽带连接名        "));
    this->my_top_layout->addStretch();
    this->my_top_layout->addWidget(this->my_lable_ppoe);
    this->my_top_layout->addWidget(this->my_lineedit_ppoe);
    this->my_top_layout->addStretch();
    //设置中间部分
    this->my_lable_reg=new QLabel(tr("网卡注册表序列"));
    this->my_lineedit_reg=new QComboBox();
    this->my_mid_layout->addStretch();
    this->my_mid_layout->addWidget(this->my_lable_reg);
    this->my_mid_layout->addWidget(this->my_lineedit_reg);
    this->my_mid_layout->addStretch();
    //设置底部
    this->my_button_sub=new QPushButton(tr("设置"));
    this->my_buttom_layout->addWidget(this->my_button_sub);
    //连接信号槽
    connect(this->my_button_sub,SIGNAL(clicked()),this,SLOT(on_pushButton_clicked()));
}

wb_setting::~wb_setting()
{

}

void wb_setting::on_pushButton_clicked()
{
 this->name_ppoe=this->my_lineedit_ppoe->text();
 this->reg_lan=this->my_lineedit_reg->text();
}
