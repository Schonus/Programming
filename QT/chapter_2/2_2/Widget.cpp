#include "Widget.h"
#include "ui_Widget.h"

Widget::Widget(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Widget)
{
    ui->setupUi(this);
    connect(ui->radioButton_Black,SIGNAL(clicked()),this,SLOT(do_Fontcolor()));
    connect(ui->radioButton_Blue,SIGNAL(clicked()),this,SLOT(do_Fontcolor()));
    connect(ui->radioButton_Red,SIGNAL(clicked()),this,SLOT(do_Fontcolor()));
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_ClearBtn_clicked()
{
    ui->plainTextEdit->clear();
}


void Widget::on_checkBox_Underline_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}


void Widget::on_checkBox_Italic_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setUnderline(checked);
    ui->plainTextEdit->setFont(font);
}

void Widget::on_checkBox_Bold_clicked(bool checked)
{
    QFont font = ui->plainTextEdit->font();
    font.setBold(checked);
    ui->plainTextEdit->setFont(font);
}


void Widget::do_Fontcolor()
{
    QPalette plet = ui->plainTextEdit->palette();
    if(ui->radioButton_Black->isChecked())
    {
        plet.setColor(QPalette::Text,Qt::black);
    }
    else if(ui->radioButton_Blue->isChecked())
    {
        plet.setColor(QPalette::Text,Qt::blue);
    }
    else if(ui->radioButton_Red->isChecked())
    {
        plet.setColor(QPalette::Text,Qt::red);
    }

    ui->plainTextEdit->setPalette(plet);
}


