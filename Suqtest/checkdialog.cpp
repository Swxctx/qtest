#include "checkdialog.h"
#include "ui_checkdialog.h"

checkdialog::checkdialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::checkdialog)
{
    ui->setupUi(this);
    this->setWindowTitle("测试项选择窗口");
    this->setMaximumSize(429,400);
    this->setMinimumSize(429,400);

    //去除右上角问号操作
    Qt::WindowFlags flags=Qt::Dialog;
     flags |=Qt::WindowCloseButtonHint;
     setWindowFlags(flags);

     //取消
     QObject::connect(ui->pushButton_2,SIGNAL(clicked()),this,SLOT(close()));


}

checkdialog::~checkdialog()
{
    delete ui;
}

void checkdialog::getckeckDataSlot(){

}
