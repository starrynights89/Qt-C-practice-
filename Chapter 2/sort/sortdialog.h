#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>

#include "ui_sortdialog.h"

namespace Ui {
class SortDialog;
}

class SortDialog : public QDialog, public Ui::SortDialog
{
    Q_OBJECT

public:
    SortDialog(QWidget *parent = 0);
    void setColumnRange(QChar first, QChar last);
    ~SortDialog();
private:
    Ui::SortDialog *ui;
};

#endif // SORTDIALOG_H
