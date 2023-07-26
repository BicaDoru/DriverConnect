#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_DriverConnect2.h"

class DriverConnect2 : public QMainWindow
{
    Q_OBJECT

public:
    DriverConnect2(QWidget *parent = nullptr);
    ~DriverConnect2();

private:
    Ui::DriverConnect2Class ui;
};
