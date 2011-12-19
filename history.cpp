#include "history.h"

History::History(){
}

<<<<<<< HEAD
void History::newEntriy(Cell *cell, std::string name){
    HistoryEntry *ent = new HistoryEntry(cell, name);
=======
History::History(){  //Dummy should be removed

}


History::~History(){
    entries.clear();
}

void History::marked(std::string name){

}

void History::newEntry(Cell* cell,std::string name){
    HistoryEntry *ent = new HistoryEntry(cell,name);
>>>>>>> 264c362786c90f0c10724768aab030d50f124f17
    entries.push_back(ent);
}

void History::playRecord(){

}

<<<<<<< HEAD
HistoryEntry* History::popEntry(std::string name){
    for(int i=0; i<entries.size(); i++)
        if(((HistoryEntry*)entries.at(i))->getName().compare(name))
            return (HistoryEntry*)entries.at(i);

    return NULL;
}

HistoryEntry* History::popLastCorrectState(Matrix *m){
    return entries.back();// this is a dummy return value
}

HistoryEntry* History::popLastEntry(){
    HistoryEntry* ent = entries.back();
=======
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
>>>>>>> 264c362786c90f0c10724768aab030d50f124f17
    return ent;
}
