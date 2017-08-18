#include "staisform.h"
#include "ui_staisform.h"

staisform::staisform(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::staisform)
{
    ui->setupUi(this);
    this->setWindowTitle("统计窗口");
    this->setMaximumSize(564,461);
    this->setMinimumSize(564,461);
    ui->lineEdit->setEnabled(false);
    ui->lineEdit_2->setEnabled(false);
}

staisform::~staisform()
{
    delete ui;
}
