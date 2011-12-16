#ifndef BOARDFACTORY_H
#define BOARDFACTORY_H

#include "matrixwidget.h"
#include "cell.h"
#include <vector>

class BoardFactory
{
public:
    BoardFactory();
    MatrixWidget* createMatrix(Cell** cells, int width, int height);
};

#endif // BOARDFACTORY_H
