#include "matrixwidget.h"

MatrixWidget::MatrixWidget(std::vector<Cell*> cells, int cellsInRow, int width, int height, QWidget *parent) : QWidget(parent){
    matrix = new Matrix(cells, cellsInRow);
    this->setLayout(new QHBoxLayout(this));
    this->setGeometry(0, 0, width, height);
}

void MatrixWidget::paint(QPainter *painter, long xPaintPos, long yPaintPos){

}

void MatrixWidget::paintEvent(QPaintEvent *painter){
    float x = 0;
    float y = 0;

    //getting the size of a side of cell rect
    float cellSide = ((this->height() < this->width()) ? this->height()/matrix->rows() : this->width()/matrix->getWidth());
    Cell* currentCell;

    for(int i=0; i < (int)matrix->getCells().size(); i++){
       currentCell = matrix->getCells().at(i);
       currentCell->setGeometry(x, y, cellSide, cellSide);

       x += cellSide;

       if(((i+1)%matrix->getWidth()) == 0){
           x = 0;
           y += cellSide;
       }

       this->layout()->addWidget(currentCell);
    }
}
