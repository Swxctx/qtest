#ifndef CHECKDIALOG_H
#define CHECKDIALOG_H

#include <QDialog>

namespace Ui {
class checkdialog;
}

class checkdialog : public QDialog
{
    Q_OBJECT

public:
    explicit checkdialog(QWidget *parent = 0);
    ~checkdialog();
private slots:
    void getckeckDataSlot();//获取选择框的值

private:
    Ui::checkdialog *ui;
};

#endif // STSTIDIALOG_H
