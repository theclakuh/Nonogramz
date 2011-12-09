#include "history.h"

History::History(){

}

void History::marked(std::string name){

}

void History::newEntriy(Matrix *map){

}

void History::playRecord(){

}

Matrix* History::popEntry(std::string name){
    Cell** cells;
    return new Matrix(cells, 0);
}

Matrix* History::popLastCorrectState(){
    Cell** cells;
    return new Matrix(cells, 0);

}

Matrix* History::popLastEntry(){
    Cell** cells;
    return new Matrix(cells, 0);

}
