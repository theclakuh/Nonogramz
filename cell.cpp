#include "cell.h"

Cell::Cell(int xPos, int yPos, QWidget *parent) : QPushButton(parent){
    this->setGeometry(xPos,yPos,64,64);
}

void Cell::paint(QPainter *painter){
}

void Cell::paintEvent(QPaintEvent *event){

}

int Cell::getXPos(){
    return xPos;
}

int Cell::getYPos(){
    return yPos;
}
