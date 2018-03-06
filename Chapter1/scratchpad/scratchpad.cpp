#include "scratchpad.h"
#include "ui_scratchpad.h"

scratchpad::scratchpad(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::scratchpad)
{
    ui->setupUi(this);
}

scratchpad::~scratchpad()
{
    delete ui;
}
