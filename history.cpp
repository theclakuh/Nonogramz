#include "history.h"

History::History(){
}

History::History(Matrix* matrix){
    this->matrix = matrix;
}

History::~History(){
    entries.clear();
}

void History::setMatrix(Matrix *matrix){
    this->matrix = matrix;
}

void History::newEntry(Cell* cell, std::string name){
    HistoryEntry *ent = new HistoryEntry(cell, name);
    entries.push_back(ent);
}

HistoryEntry* History::popEntry(std::string name){
    for(int i=0; i<(int)entries.size(); i++)
        if(((HistoryEntry*)entries.at(i))->getName().compare(name))
            return (HistoryEntry*)entries.at(i);

    return NULL;
}

HistoryEntry* History::popEntry(int number){
    return entries.at(number);//TODO not correct
}
/**
    How this should work? Only the last correct state or a backward mechanism?
**/
HistoryEntry* History::popLastCorrectState(){
    HistoryEntry* ent = NULL;
    for(int i =(int)entries.size();i>0;i--){
        if(entries.at(i)->getCell()->getValue()){
            ent = (HistoryEntry*)entries.at(i);
        }
    }
    return ent;
}

HistoryEntry* History::popLastEntry(){
    HistoryEntry* ent = entries.back();
    return ent;
}

void History::playRecord(){

}
