#include "mainwindow.h"
#include "logindlg.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    LoginDlg dlg;                       // 建立新建的LoginDlg类的实例dlg
    if(dlg.exec() == QDialog::Accepted) // 利用Accepted返回值判断按钮是否被按下
    {
        w.show();                       // 如果被按下，现实主窗口
        return a.exec();                // 程序一直执行，直到主窗口关闭
    }
    else
        return a.exec();                // 如果没有被按下，则不会进入主窗口，整个程序结束运行
}

// 在这里，先创建了LoginDlg的对象dlg，然后让dlg运行，即执行exec()函数
// ,这样会现实对话框窗口,然后判断exec()的返回值,如果用户按下了登录按钮，
// 那么返回值应该是Accepted,这时就现实主窗口，并正常执行程序，如果没有按下
// 登录按钮，那就结束程序。
