#include "sortdialog.h"
#include "ui_sortdialog.h"

sortdialog::sortdialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::sortdialog)
{
    ui->setupUi(this);
}

sortdialog::~sortdialog()
{
    delete ui;
}
