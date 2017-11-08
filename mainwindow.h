#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <wb_setting.h>
#include<QtDebug>
#include<QTableWidget>
#include<QMenuBar>
#include<QMenu>
#include <QStatusBar>
#include <QFile>
#include <QAction>


class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
public slots:
    void OpenSetWid();
private:
    wb_setting *my_webset;
    QTableWidget *main_widget;
    QMenuBar *my_menubar;
    QAction    *my_menu_set;
    QAction    *my_menu_import;
    QAction    *my_menu_strat;
    QAction    *my_menu_stop;
    QAction    *my_menu_exports;
    QStatusBar *my_statusbar;
    void MyInit();
};

#endif // MAINWINDOW_H
