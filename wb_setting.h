#ifndef WB_SETTING_H
#define WB_SETTING_H

#include <QWidget>
#include <QLabel>
#include <QLineEdit>
#include <QPushButton>
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QBoxLayout>
class wb_setting : public QWidget
{
    Q_OBJECT

public:
    explicit wb_setting(QWidget *parent = 0);
    QString name_ppoe;
    QString reg_lan;
    ~wb_setting();

private slots:
    void on_pushButton_clicked();

private:
   QLabel* my_lable_ppoe;
   QLabel* my_lable_reg;
   QLineEdit* my_lineedit_ppoe;
   QLineEdit* my_lineedit_reg;
   QPushButton* my_button_sub;
   QVBoxLayout* my_main_layout;
   QHBoxLayout* my_top_layout;
   QHBoxLayout* my_mid_layout;
   QHBoxLayout* my_buttom_layout;

};

#endif // WB_SETTING_H
