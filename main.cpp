#include "mainwindow.h"
#include <QObject>
#include <QDebug>
#include <QTimer>
#include <QApplication>
#include <QTime>
#include "xatom-helper.h"

#define LENGTH 128

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    QSplitter *splitterMain = new QSplitter(Qt::Horizontal, 0); //新建主分割窗口，水平分割

    MyTextEdit *textLeft = new MyTextEdit(QObject::tr("左部件"),splitterMain);

    QSplitter *splitterRight = new QSplitter(Qt::Vertical, splitterMain);   //右分割窗口，并以主分割窗口作为父窗口
    splitterRight->setOpaqueResize(false);

    QTextEdit *textUp = new QTextEdit(QObject::tr("上部件"),splitterRight);
    textUp->setAlignment(Qt::AlignCenter);

    QTextEdit *textMiddle = new QTextEdit(QObject::tr("中间部件"),splitterRight);
    textMiddle->setAlignment(Qt::AlignCenter);

    QTextEdit *textBottom = new QTextEdit(QObject::tr("底部部件"),splitterRight);
    textBottom->setAlignment(Qt::AlignCenter);

    splitterMain->setStretchFactor(1,1);
    splitterMain->setWindowTitle(QObject::tr("分割窗口"));
    splitterMain->show();

    return a.exec();
}
