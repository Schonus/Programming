#include "QT_Test.h"

QT_Test::QT_Test(QWidget* parent)
    : QMainWindow(parent)
    , ui(new Ui_QT_Test)
{
    ui->setupUi(this);
}

QT_Test::~QT_Test()
{
    delete ui; 
}