#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include<QMessageBox>
#include<QDialog>
#include<QCloseEvent>//程序关闭时所处理的内容


#include "logindialog.h"
#include "checkdialog.h"
#include "staisform.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

protected:
    void closeEvent(QCloseEvent *event);//事件函数受保护

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void loginSlot();//输入密码
    void checkTestSlot();//测试项选择
    void statisDataSlot();//统计
    void aboutSlot();//关于软件

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
