#include "logindialog.h"
#include "ui_logindialog.h"

logindialog::logindialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::logindialog)
{
    ui->setupUi(this);

    //去除右上角问号操作
    Qt::WindowFlags flags=Qt::Dialog;
     flags |=Qt::WindowCloseButtonHint;
     setWindowFlags(flags);

    this->setWindowTitle("输入密码窗口");
    this->setMaximumSize(310,184);
    this->setMinimumSize(310,184);

    //明文加密(用于密码)
    ui->loginLinEdit->setEchoMode(QLineEdit::Password);
    //支持回车登录操作
    QShortcut *key=new QShortcut(QKeySequence(Qt::Key_Return),this);//创建一个快捷键"Key_Return"键
    QObject::connect(key,SIGNAL(activated()),this,SLOT(SuloginSlot()));//连接到登录槽函数

    //确定
    QObject::connect(ui->loginpushButton,SIGNAL(clicked()),this,SLOT(SuloginSlot()));
    //取消
     QObject::connect(ui->cancelpushButton,SIGNAL(clicked()),this,SLOT(close()));
}

logindialog::~logindialog()
{
    delete ui;
}

//登录操作
void logindialog::SuloginSlot(){
    if(ui->loginLinEdit->text().isEmpty())
    {
        QMessageBox::information(this,"提示","请输入密码");
        ui->loginLinEdit->setFocus();

    }else{
        //得到输入的密码
        QString pass = ui->loginLinEdit->text();
    }
}
