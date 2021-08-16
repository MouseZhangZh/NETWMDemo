#include "mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
{
}

void MainWindow::resizeEvent(QResizeEvent *event)
{
//    qDebug() << (int)(this->size().width() / 2);
//    XAtomHelper::getInstance()->setDecorationTitlebarLeft(this->winId(), (int)(this->size().width() / 2));
//    return QMainWindow::resizeEvent(event);
}

MainWindow::~MainWindow()
{
}

