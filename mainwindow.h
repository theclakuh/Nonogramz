#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "game.h"
#include "matrixwidget.h"
#include <QtGui/QMainWindow>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
private:
    Ui::MainWindow *ui;
    Game *game;
    MatrixWidget *board;
};

#endif // MAINWINDOW_H
