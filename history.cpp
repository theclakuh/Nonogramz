#include "history.h"

History::History(){
}

History::~History(){
    entries.clear();
}

void History::newEntry(Cell* cell, std::string name){
    HistoryEntry *ent = new HistoryEntry(cell, name);
    entries.push_back(ent);
}

HistoryEntry* History::popEntry(std::string name){
    for(int i=0; i<entries.size(); i++)
        if(((HistoryEntry*)entries.at(i))->getName().compare(name))
            return (HistoryEntry*)entries.at(i);

    return NULL;
}

HistoryEntry* History::popEntry(int number){
    return entries.at(number);//TODO not correct
}

HistoryEntry* History::popLastCorrectState(Matrix *m){
    m;
    return entries.back();// this is a dummy return value
}

HistoryEntry* History::popLastEntry(){
    HistoryEntry* ent = entries.back();
    return ent;
}

void History::playRecord(){

}
