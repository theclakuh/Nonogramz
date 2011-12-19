#include "matrix.h"

Matrix::Matrix(std::vector<Cell*> cells, int width){
    this->cells = cells;
    this->width = width;

    if(!CHECK(cells.size(), width)){
        //throw new exception();
        std::cout << "ERROR in Matrix.constructor: matrix is invalid!" << std::endl;
    }
}

Cell* Matrix::cellAt(int x, int y){
    int index = INDEX(x, y, width);
    return cells.at(index);
}

std::vector<Cell*> Matrix::getCells(){
    return cells;
}

int Matrix::getWidth(){
    return width;
}

int Matrix::rows(){
    return cells.size()/width;
}
