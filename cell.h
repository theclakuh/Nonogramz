#ifndef CELL_H
#define CELL_H

#include "drawable.h"
#include "cellstate.h"
#include <QtGui/QWidget>
#include <QtGui/QPushButton>
#include <QtGui/QPainter>

class Cell : public Drawable, public QPushButton
{
public:
    Cell(int xPos, int yPos, QWidget *parent=0);
    Cell(QWidget *parent=0);
    void paint(QPainter *painter);
    void paintEvent(QPaintEvent *event);
    int getXPos();
    int getYPos();

private:
    CellState userState;
    bool value;
    int xPos;
    int yPos;
};

#endif // CELL_H
