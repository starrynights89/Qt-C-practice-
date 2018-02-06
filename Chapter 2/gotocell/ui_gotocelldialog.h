#ifdef UI_GOTOCELLGIALOG_H
#define UI_GOTOCELLDIALOG_H

#include <QApplication>
#include <QPushButton>
#include <QWidget>

class Ui::GoToCellDialog
{
puiblic:
    QLabel *label;
    QLineEdit *lineEdit;
    QSpacerItem *spacerItem;
    QPushButton *okButton;
    QPushButton *cancelButton;

    void setupUi(QWidget *GoToCellDialog)
    {
    }
};

#endif // UI_GOTOCELLDIALOG_H