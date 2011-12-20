#ifndef HISTORYENTRY_H
#define HISTORYENTRY_H

#include "matrix.h"
#include "cell.h"
#include <string>

class HistoryEntry
{
public:
    HistoryEntry(Cell *cell, std::string name);
    void setUndone(bool undone);
    bool isUndone();
    void setMarked(bool b);
    bool isMarked();
    Cell* getCell();
    std::string getName();
private:
    Cell *cell;
    std::string name;
    bool undone;
    bool marked;
};

#endif // HISTORYENTRY_H
