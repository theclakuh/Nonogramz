#ifndef BOARDFACTORY_H
#define BOARDFACTORY_H

#include "matrixwidget.h"
#include <vector>

class BoardFactory
{
public:
    BoardFactory();
    MatrixWidget* createMatrix(std::vector<std::vector<int> > xValues, std::vector<std::vector<int> > yValues, int width, int height);
};

#endif // BOARDFACTORY_H
