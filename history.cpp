#include "history.h"

History::History(Matrix* m){
    this->matrix = m;
}

void History::marked(std::string name){

}

void History::newEntry(Cell* cell,std::string name){
    HistoryEntry ent = new HistoryEntry(cell,name);
    entries.push_back(ent);
}

void History::playRecord(){

}

Cell* History::popEntry(int xPos, int yPos){
    return matrix->getCellAt(xPos, yPos);//add after mario commit
}

Cell* History::popLastCorrectState(){
    return matrix->getCellAt(lastPosX,lastPosY);//add after mario commit

}

Cell* History::popLastEntry(){
    HistoryEntry* ent = entries.end();
    return ent;

}
