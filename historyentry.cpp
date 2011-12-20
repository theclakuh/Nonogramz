#include "historyentry.h"

HistoryEntry::HistoryEntry(Cell* cell,std::string name){
    this->cell = cell;
    this->name = name;

    if(name.length() > 0){
        marked = true;
    }
}


void HistoryEntry::setUndone(bool undone){
    this->undone = undone;
}

bool HistoryEntry::isUndone(){
    return undone;
}

Cell* HistoryEntry::getCell(){
    return cell;
}

std::string HistoryEntry::getName(){
    return name;
}
/**
    Marked is set by User. Last Cell user marked
**/
void HistoryEntry::setMarked(bool b){
    marked = b;
}

bool HistoryEntry::isMarked(){
    return marked;
}
