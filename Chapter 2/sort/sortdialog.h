#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QWidget>

namespace Ui {
class sortdialog;
}

class sortdialog : public QWidget
{
    Q_OBJECT

public:
    explicit sortdialog(QWidget *parent = 0);
    ~sortdialog();

private:
    Ui::sortdialog *ui;
};

#endif // SORTDIALOG_H
