#ifndef CELL_H
#define CELL_H

#include "drawable.h"
#include "cellstate.h"
#include <sstream>
#include <string>
#include <QMouseEvent>
#include <QtGui/QWidget>
#include <QtGui/QPushButton>
#include <QPalette>
#include <QtGui/QPainter>

//using namespace std;

class Cell : public QPushButton
{
public:
    Cell(int xPos, int yPos, QWidget *parent=0);
    Cell(QWidget *parent=0);
    int getXPos();
    int getYPos();
    bool getValue();
    void setValue(bool value);
    void mouseReleaseEvent(QMouseEvent *e);

private:
    CellState userState;
    bool value;
    int xPos;
    int yPos;
    void paintEvent(QPaintEvent *);
};

#endif // CELL_H
