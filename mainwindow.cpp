#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent)
{

    //设置窗口大小
    this->setFixedSize(800,600);
    this->main_widget=new QTableWidget(this);
    this->main_widget->setFixedSize(800,600);
    this->setCentralWidget(this->main_widget);
    //设置菜单
    this->my_menubar=new QMenuBar(this);
    this->my_menu_set=new QAction(tr("设置"));
    this->my_menu_import=new QAction(tr("导入"));
    this->my_menu_strat=new QAction(tr("开始"));
    this->my_menu_stop=new QAction(tr("停止"));
    this->my_menu_exports=new QAction(tr("导出"));
    this->my_menubar->addAction(this->my_menu_set);
     this->my_menubar->addAction(this->my_menu_import);
     this->my_menubar->addAction(this->my_menu_strat);
     this->my_menubar->addAction(this->my_menu_stop);
    this->my_menubar->addAction(this->my_menu_exports);
    this->setMenuBar(this->my_menubar);
    //设置状态栏目
    this->my_statusbar=new QStatusBar(this);
    this->setStatusBar(this->my_statusbar);
    //设置主题窗口
    this->main_widget->setColumnCount(4);
    QStringList header;
    header<<tr("手机号")<<tr("123456")<<tr("密码后六")<<tr("MAC");
    this->main_widget->setHorizontalHeaderLabels(header);
   this->main_widget->horizontalHeader()->setSectionResizeMode(QHeaderView::Stretch);//设置列等宽
    this->MyInit();
    connect(this->my_menu_set,SIGNAL(triggered(bool)),this,SLOT(OpenSetWid()));
    connect(this->my_menu_import,SIGNAL(triggered(bool)),this,SLOT(OpenFdImport()));

}
void MainWindow::OpenSetWid()
{
 if(this->my_webset->isVisible() == false)
 {
  this->my_webset->show();
 }
 qDebug()<<"opensetwid"<<endl;
}
void MainWindow::OpenFdImport()
{
        QString file_name = QFileDialog::getOpenFileName(this,tr("导入宽带帐号"),".","*.txt");
        qDebug() << file_name<<endl;
         QFile f(file_name);
         if(!f.open(QIODevice::ReadOnly | QIODevice::Text))
         {
             qDebug() << tr("Open failed.") << endl;

         }
         QTextStream txtInput(&f);
         QString lineStr;
         int i=0;
         while(!txtInput.atEnd())
         {
             lineStr = txtInput.readLine();
             this->main_widget->setRowCount(i+1);
             this->main_widget->setItem(i,0,new QTableWidgetItem(lineStr));
             qDebug() << lineStr << endl;
             i++;
         }

         f.close();

}
void MainWindow::MyInit()
{
    this->my_webset=new wb_setting();
    this->my_webset->setWindowFlag(Qt::Dialog);
}
MainWindow::~MainWindow()
{

}
