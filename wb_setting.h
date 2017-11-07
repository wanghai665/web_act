#ifndef WB_SETTING_H
#define WB_SETTING_H

#include <QWidget>


namespace Ui {
class wb_setting;
}

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
    Ui::wb_setting *ui;
};

#endif // WB_SETTING_H
