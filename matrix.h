#ifndef MATRIX_H
#define MATRIX_H

#include "drawable.h"
#include "cell.h"
#include <exception>
#include <vector>
#include <iostream>
#include <QtGui/QPainter>

#define INDEX(x, y, WIDTH) (x*WIDTH + y)
#define CHECK(len, WIDTH) (len%WIDTH == 0)

class Matrix
{
public:
    Matrix(std::vector<Cell*> cells, int width);
    Cell* cellAt(int x, int y);
    int getWidth();
    std::vector<Cell*> getCells();
    int rows();

private:
    std::vector<Cell*> cells;
    int width;
};

#endif // MATRIX_H
