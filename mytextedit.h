#ifndef MYTEXTEDIT_H
#define MYTEXTEDIT_H
#include <QWidget>
#include <QDebug>
#include <QApplication>
#include <QSplitter>
#include <QTextCodec>
#include <QTextEdit>
#include <QObject>
#include <QWidget>
#include <QTimer>
#include <QTime>
#include <QResizeEvent>

#include "xatom-helper.h"

class MyTextEdit : public QTextEdit
{
public:
    explicit MyTextEdit(const QString &text, QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *event);
};

#endif // MYTEXTEDIT_H
