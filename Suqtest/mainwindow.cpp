#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Sugr量产测试工具V1.0");//窗口标题
    this->setMaximumSize(737,459);
    this->setMinimumSize(737,459);

    //login
    QObject::connect(ui->loginaction,SIGNAL(triggered()),this,SLOT(loginSlot()));
    QObject::connect(ui->checkaction,SIGNAL(triggered()),this,SLOT(checkTestSlot()));
    QObject::connect(ui->statisaction,SIGNAL(triggered()),this,SLOT(statisDataSlot()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *event)//事件保护
{
        //event->ignore();//忽略事件，不关闭
        //event->accept();//接收关闭
            QMessageBox msgBox;
            msgBox.setText("提示");
            msgBox.setInformativeText("确定退出?");
            msgBox.setStandardButtons(QMessageBox::Yes | QMessageBox::No);
            msgBox.setDefaultButton(QMessageBox::Yes);
            int ret = msgBox.exec();
            switch (ret)
            {
              case QMessageBox::Yes:
                    event->accept();//直接退出
                  // Don't Save was clicked
                  break;
              case QMessageBox::No:
                  // Cancel was clicked
                   event->ignore();//继续编辑
                  break;
              default:
                  // should never be reached
                  break;
            }
}

//输入密码
void MainWindow::loginSlot(){
    logindialog *dialog = new logindialog;//new
    dialog->exec();
}

 //测试项选择
void MainWindow::checkTestSlot(){
    checkdialog *dialog = new checkdialog;//new
    dialog->show();
}

//统计
void MainWindow::statisDataSlot(){
    staisform *dialog = new staisform;//new
    dialog->show();
}
//关于软件
void MainWindow::aboutSlot(){

}
