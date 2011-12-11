#include "boardfactory.h"

BoardFactory::BoardFactory()
{
}

MatrixWidget* BoardFactory::createMatrix(std::vector<std::vector<int> > xValues, std::vector<std::vector<int> > yValues, int width, int height){
    return new MatrixWidget();
}
