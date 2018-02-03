#ifndef FINDDIALOG_H
#define FINDDIALOG_H

#include <QMainWindow>
#include <QDialog>

class QCheckBox;
class QLabel;
class QLineEdit;
class QPushButton;

namespace Ui {
class FindDialog;
}

class FindDialog : public QDialog
{
    Q_OBJECT

public:
    //add FindDialog constructor
    explicit FindDialog(QWidget *parent = 0);
    ~finddialog();
signals:
    
private:
    Ui::finddialog *ui;
};

#endif // FINDDIALOG_H
