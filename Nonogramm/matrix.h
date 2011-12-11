#ifndef MATRIX_H
#define MATRIX_H

#include "drawable.h"
#include "cell.h"
#include <vector>
#include <QtGui/QPainter>

#define INDEX(x, y) (x*WIDTH + y)
#define CHECK(len) (WITHD%len == 0)

class Matrix //: public Drawable
{
public:
    Matrix(Cell** cells, long length);
    //if we inherit from Drawable
    //void paint(QPainter *painter);
    void paint(QPainter *painter, long xPaintPos, long yPaintPos);

private:
    Cell** cells;
    bool value;
    bool marked;
};

#endif // MATRIX_H
