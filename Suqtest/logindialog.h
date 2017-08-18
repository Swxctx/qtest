#ifndef LOGINDIALOG_H
#define LOGINDIALOG_H

#include <QDialog>
#include<QShortcut>
#include<QString>//读取lineedit
#include<QMessageBox>
#include<QSettings>

namespace Ui {
class logindialog;
}

class logindialog : public QDialog
{
    Q_OBJECT

public:
    explicit logindialog(QWidget *parent = 0);
    ~logindialog();

private slots:
    void SuloginSlot();//输入密码登录

private:
    Ui::logindialog *ui;
};

#endif // LOGINDIALOG_H
