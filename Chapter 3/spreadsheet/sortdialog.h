#ifndef SORTDIALOG_H
#define SORTDIALOG_H

#include <QDialog>

class SortDialog : public QDialog, public Ui::SortDialog
{
    Q_OBJECT

public:
    SortDialog(QWidget *parent = 0);
    void setColumnRange(QChar first, QChar last);
};

#endif // SORTDIALOG_H
