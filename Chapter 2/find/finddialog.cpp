#include "finddialog.h"
#include "ui_finddialog.h"

finddialog::finddialog(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::finddialog)
{
    ui->setupUi(this);
}

finddialog::~finddialog()
{
    delete ui;
}
