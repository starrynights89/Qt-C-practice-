#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QWidget>

namespace Ui {
class finddialog;
}

class finddialog : public QWidget
{
    Q_OBJECT

public:
    explicit finddialog(QWidget *parent = 0);
    ~finddialog();

private:
    Ui::finddialog *ui;
};

#endif // FINDDIALOG_H
