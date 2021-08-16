#include "mytextedit.h"

MyTextEdit::MyTextEdit(const QString &text, QWidget *parent) : QTextEdit(text, parent)
{
    this->setStyleSheet("*{border-width:0px;border-style:solid;border-radius:0px;background-color:rgb(100,100,100)}");
    qDebug() << "this->size(): " << this->size();
    qDebug() << "this->winId()" << this->winId();
}

void MyTextEdit::resizeEvent(QResizeEvent *event)
{
    qDebug() << "=========" << event->size();
    if (parentWidget())
        XAtomHelper::getInstance()->setDecorationTitlebarLeft(this->parentWidget()->winId(), event->size().width());
}
