#ifndef HISTORY_H
#define HISTORY_H

#include "historyentry.h"
#include "matrix.h"
#include "cell.h"
#include <vector>
#include <string>

class History
{
    //TODO: Mark/Remember Cells not Matrix
public:
    History();
    History(Matrix* matrix);
    ~History();
    void setMatrix(Matrix* matrix);
    void newEntry(Cell* cell, std::string name);
    HistoryEntry* popEntry(std::string name);
    HistoryEntry* popEntry(int number);
    HistoryEntry* popLastCorrectState(); //will run over the entries an look for the last one
                                                      //in which all cells are correct selected like the matrix suggests
    HistoryEntry* popLastEntry();
    void playRecord();

private:
    std::vector<HistoryEntry*> entries;
    Matrix* matrix;
};

#endif // HISTORY_H
