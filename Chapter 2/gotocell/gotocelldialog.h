#ifndef GOTOCELLDIALOG_H
#define GOTOCELLDIALOG_H

#include <QWidget>
#include <QDialog>

namespace Ui {
class gotocelldialog;
}

class GoToCellDialog : public QDialog, public Ui::GoToCellDialog
{
    Q_OBJECT

public:
    explicit GoToCellDialog(QWidget *parent = 0);
    ~gotocelldialog();
private slots:
    void on_lineEdit_textChanged();
private:
    Ui::gotocelldialog *ui;
};

#endif // GOTOCELLDIALOG_H