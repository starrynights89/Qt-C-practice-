#ifndef SCRATCHPAD_H
#define SCRATCHPAD_H

#include <QWidget>

namespace Ui {
class scratchpad;
}

class scratchpad : public QWidget
{
    Q_OBJECT

public:
    explicit scratchpad(QWidget *parent = 0);
    ~scratchpad();

private:
    Ui::scratchpad *ui;
};

#endif // SCRATCHPAD_H
