#ifndef STAISFORM_H
#define STAISFORM_H

#include <QWidget>

namespace Ui {
class staisform;
}

class staisform : public QWidget
{
    Q_OBJECT

public:
    explicit staisform(QWidget *parent = 0);
    ~staisform();

private:
    Ui::staisform *ui;
};

#endif // STAISFORM_H
