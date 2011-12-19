#include "history.h"

History::History(Matrix* m){
    this->matrix = m;
}

History::History(){  //Dummy should be removed

}


History::~History(){
    entries.clear();
}

void History::marked(std::string name){

}

void History::newEntry(Cell* cell,std::string name){
    HistoryEntry *ent = new HistoryEntry(cell,name);
    entries.push_back(ent);
}

void History::playRecord(){

}

HistoryEntry* History::popEntry(int number){
    return entries.at(number);//TODO not correct
}
/**
    Get the last correct state
**/
HistoryEntry* History::popLastCorrectState(){
    HistoryEntry *ent = NULL;
    int iter = 0;
    while(ent != NULL && iter < (int)entries.size()){
        if(entries.at(iter)->getMarked()){      // or anything else that shows if this cell is correct
           // ent = entries.at(iter);
        }
        iter++;
    }
    return ent;//add after mario commit
}

HistoryEntry* History::popLastEntry(){
    HistoryEntry *ent = *entries.end();
    return ent;

}
