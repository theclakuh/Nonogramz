#include "history.h"

History::History(){
}

void History::newEntriy(Cell *cell, std::string name){
    HistoryEntry *ent = new HistoryEntry(cell, name);
    entries.push_back(ent);
}

void History::playRecord(){

}

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
    return ent;
}
