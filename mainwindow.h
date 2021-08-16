#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "mytextedit.h"
#include <QMainWindow>

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    void resizeEvent(QResizeEvent *event);
    ~MainWindow();
};
#endif // MAINWINDOW_H
