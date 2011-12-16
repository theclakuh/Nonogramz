#include "boardfactory.h"

BoardFactory::BoardFactory()
{
}

MatrixWidget* BoardFactory::createMatrix(Cell** cells, int width, int height){
    return new MatrixWidget();
}
