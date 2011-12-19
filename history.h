#ifndef HISTORY_H
#define HISTORY_H

#include "historyentry.h"
#include "matrix.h"
#include "cell.h"
#include <vector>

class History
{
    //TODO: Mark/Remember Cells not Matrix
public:
    History(Matrix *m);
    History();      //Dummy should be removed
    ~History();
    void newEntry(Cell* cell,std::string name);
    void marked(std::string name);
    HistoryEntry* popEntry(int number);
    HistoryEntry* popLastEntry();
    void playRecord();
    HistoryEntry* popLastCorrectState();

private:
    std::vector<HistoryEntry*> entries;
    Matrix *matrix;
};

#endif // HISTORY_H
