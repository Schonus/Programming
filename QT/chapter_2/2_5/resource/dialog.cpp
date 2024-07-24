#include "dialog.h"
#include "ui_dialog.h"
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QCheckBox>
#include <QRadioButton>
#include <QPlainTextEdit>
#include <QPushButton>
//定义信号槽的行为
void Dialog::do_ChkBoxUnder(bool checked)
{
    QFont font = txtEdit->font();
    font.setUnderline(checked);
    txtEdit->setFont(font);
}
void Dialog::do_ChkBoxBold(bool checked)
{
    QFont font = txtEdit->font();
    font.setBold(checked);
    txtEdit->setFont(font);
}
void Dialog::do_ChkBoxItalic(bool checked)
{
    QFont font = txtEdit->font();
    font.setItalic(checked);
    txtEdit->setFont(font);
}
void Dialog::do_RadioButtons()
{
    QPalette plet = txtEdit->palette();
    if(radioBlack->isChecked() == true)
    {
        plet.setColor(QPalette::Text,Qt::black);
    }
    else if(radioRed->isChecked() == true)
    {
        plet.setColor(QPalette::Text,Qt::red);
    }
    else if(radioBlue->isChecked() == true)
    {
        plet.setColor(QPalette::Text,Qt::blue);
    }
    txtEdit->setPalette(plet);
}

//定义其他函数的行为
void Dialog::initUI()
{
    //三个复选框的布置
    chkBoxUnder = new QCheckBox("下划线");
    chkBoxBold = new QCheckBox("粗体");
    chkBoxItalic = new QCheckBox("斜体");
    QHBoxLayout *HLay = new QHBoxLayout();
    HLay->addWidget(chkBoxUnder);
    HLay->addWidget(chkBoxItalic);
    HLay->addWidget(chkBoxBold);

    //三个单选框的布置
    radioBlack = new QRadioButton("Black");
    radioBlue = new QRadioButton("Blue");
    radioRed = new QRadioButton("Red");
    QHBoxLayout *HLay2 = new QHBoxLayout();
    HLay2->addWidget(radioBlack);
    HLay2->addWidget(radioRed);
    HLay2->addWidget(radioBlue);

    //三个按钮的布置
    BtnOK = new QPushButton("确定");
    BtnCancel = new QPushButton("取消");
    BtnExit = new QPushButton("退出");
    txtEdit = new QPlainTextEdit();
    txtEdit->setPlainText("Hello World\n手工创建");
    QFont font = txtEdit->font();
    font.setPointSize(20);
    txtEdit->setFont(font);
    QHBoxLayout *HLay3 = new QHBoxLayout();
    HLay3->addWidget(BtnOK);
    // HLay3->addStretch();
    HLay3->addWidget(BtnCancel);
    // HLay3->addStretch();
    HLay3->addWidget(BtnExit);
}

void Dialog::iniSignalSlots()
{
    //三个单选框的信号槽链接
    connect(radioBlue,SIGNAL(clicked()),this,SLOT(do_RadioButtons()));
    connect(radioRed,SIGNAL(clicked()),this,SLOT(do_RadioButtons()));
    connect(radioBlack,SIGNAL(clicked()),this,SLOT(do_RadioButtons()));
    //三个复选框的信号槽链接
    connect(chkBoxBold,SIGNAL(clicked(bool)),this,SLOT(do_ChkBoxBold(bool)));
    connect(chkBoxUnder,SIGNAL(clicked(bool)),this,SLOT(do_ChkBoxUnder(bool)));
    connect(chkBoxItalic,SIGNAL(clicked(bool)),this,SLOT(do_ChkBoxItalic(bool)));
    //三个按钮的信号槽链接
    connect(BtnOK,SIGNAL(clicked()),this,SLOT(accept()));
    connect(BtnCancel,SIGNAL(clicked()),this,SLOT(reject()));
    connect(BtnExit,SIGNAL(clicked()),this,SLOT(close()));
}

Dialog::Dialog(QWidget *parent): QDialog(parent)
{
    chkBoxUnder=new QCheckBox("下划线");
    chkBoxItalic=new QCheckBox("斜体");
    chkBoxBold=new QCheckBox("加粗");
    QHBoxLayout *HLay=new QHBoxLayout();
    HLay->addWidget(chkBoxUnder);
    HLay->addWidget(chkBoxItalic);
    HLay->addWidget(chkBoxBold);

    radioBlack=new QRadioButton("黑色");
    radioRed=new QRadioButton("红色");
    radioBlue=new QRadioButton("蓝色");
    QHBoxLayout *HLay2=new QHBoxLayout();
    HLay2->addWidget(radioBlack);
    HLay2->addWidget(radioRed);
    HLay2->addWidget(radioBlue);

    txtEdit=new QPlainTextEdit;
    txtEdit->setPlainText("Hello world\n 手工创建！");
    QFont font=txtEdit->font();
    font.setPointSize(20);
    txtEdit->setFont(font);

    BtnOK=new QPushButton("确定");
    BtnCancel=new QPushButton("取消");
    BtnExit=new QPushButton("退出");
    QHBoxLayout *HLay3=new QHBoxLayout();
    HLay3->addWidget(BtnOK);
    HLay3->addStretch();
    HLay3->addWidget(BtnCancel);
    HLay3->addStretch();
    HLay3->addWidget(BtnExit);

    QVBoxLayout *Vlay=new QVBoxLayout();
    Vlay->addLayout(HLay);
    Vlay->addLayout(HLay2);
    Vlay->addWidget(txtEdit);
    Vlay->addLayout(HLay3);

    setLayout(Vlay);

    connect(chkBoxUnder,SIGNAL(clicked(bool)),this,SLOT(do_ChkBoxUnder(bool)));
    connect(chkBoxItalic,SIGNAL(clicked(bool)),this,SLOT(do_ChkBoxItalic(bool)));
    connect(chkBoxBold,SIGNAL(clicked(bool)),this,SLOT(do_ChkBoxBold(bool)));

    connect(radioBlack,SIGNAL(clicked(bool)),this,SLOT(do_RadioButtons()));
    connect(radioRed,SIGNAL(clicked(bool)),this,SLOT(do_RadioButtons()));
    connect(radioBlue,SIGNAL(clicked(bool)),this,SLOT(do_RadioButtons()));

    connect(BtnOK,SIGNAL(clicked()),this,SLOT(accept()));
    connect(BtnCancel,SIGNAL(clicked()),this,SLOT(reject()));
    connect(BtnExit,SIGNAL(clicked()),this,SLOT(close()));

    // this->initUI();            //界面创建与布局
    // this->iniSignalSlots();   //信号与槽的关联
    setWindowTitle("手动创建UI");   //设置窗口标题
}

Dialog::~Dialog() {}
