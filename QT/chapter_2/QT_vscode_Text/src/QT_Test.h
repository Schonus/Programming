#pragma once
#include "ui_QT_Test.h"
#include <QMainWindow>

class QT_Test : public QMainWindow {
    Q_OBJECT
    
public:
    QT_Test(QWidget* parent = nullptr);
    ~QT_Test();

private:
    Ui_QT_Test* ui;
};