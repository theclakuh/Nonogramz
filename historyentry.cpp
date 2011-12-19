#include "historyentry.h"

HistoryEntry::HistoryEntry(Cell* cell,std::string name){
    this->cell = cell;
    this->name = name;
}


void HistoryEntry::setUndo(bool b){
    undone = b;
}

bool HistoryEntry::getUndo(){
    return undone;
}

Cell* HistoryEntry::getEntry(){
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

bool HistoryEntry::getMarked(){
    return marked;
}
