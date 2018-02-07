#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QWidget>

namespace Ui {
class gotocelldialog;
}

class gotocelldialog : public QWidget
{
    Q_OBJECT

public:
    explicit gotocelldialog(QWidget *parent = 0);
    ~gotocelldialog();

private:
    Ui::gotocelldialog *ui;
};

#endif // GOTOCELLDIALOG_H
