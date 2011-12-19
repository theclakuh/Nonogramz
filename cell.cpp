#include "cell.h"

Cell::Cell(int xPos, int yPos, QWidget *parent) : QPushButton(parent){
    this->setGeometry(xPos,yPos,64,64);
    userState = NOT_SET;
}

Cell::Cell(QWidget *parent) : QPushButton(parent){
    this->setGeometry(xPos,yPos,64,64);
    userState = NOT_SET;
}

int Cell::getXPos(){
    return xPos;
}

int Cell::getYPos(){
    return yPos;
}

void Cell::setValue(bool value){
    this->value = value;
}

bool Cell::getValue(){
    return value;
}

void Cell::paintEvent(QPaintEvent *painter){
    std::stringstream stream;
   std::string color = "";

    switch(userState) {
    case NOT_SET:
        color = "#DFDF00";
        break;
    case EMPTY:
        color = "#A3A3EF";
        break;
    case FILLED:
        color = "#0000FF";
        break;
    case NOT_SURE:
        color = "#DFDF00";
    }

    stream << "* { margin: 2px; background-color: " << color << ";}";

    this->setStyleSheet(stream.str().c_str());
    QPushButton::paintEvent(painter);
}

void Cell::mouseReleaseEvent(QMouseEvent *e){
    e->accept();
   switch(e->button()){
   case Qt::LeftButton:
       userState = FILLED;
       break;
   case Qt::MiddleButton:
       userState = NOT_SURE;
       break;
   case Qt::RightButton:
       userState = EMPTY;
   }

   QPushButton::mouseReleaseEvent(e);
}
