#ifndef DIALOG_H
#define DIALOG_H
#include <QDialog>
class QCheckBox;
class QRadioButton;
class QPlainTextEdit;
class QPushButton;

class Dialog : public QDialog
{
    Q_OBJECT
private:
    QCheckBox *chkBoxUnder;     //三个复选框
    QCheckBox *chkBoxBold;
    QCheckBox *chkBoxItalic;

    QRadioButton *radioBlack;     //三个单选框
    QRadioButton *radioBlue;
    QRadioButton *radioRed;

    QPlainTextEdit *txtEdit;    //一个输入框

    QPushButton *BtnOK;     //三个按钮
    QPushButton *BtnCancel;
    QPushButton *BtnExit;


    void initUI();              //自定义函数
    void iniSignalSlots();

private slots:                  //待编辑的信号槽
    void do_ChkBoxUnder(bool checked);  //underline复选框信号槽
    void do_ChkBoxBold(bool checked);   //Bold复选框信号槽
    void do_ChkBoxItalic(bool checked); //Italic复选框信号槽
    void do_RadioButtons();             //单选框信号槽

public:
    Dialog(QWidget *parent = nullptr);
    ~Dialog();
};
#endif // DIALOG_H
