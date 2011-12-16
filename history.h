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
    void newEntriy(Cell* cell,std::string name);
    void marked(std::string name);
    Cell* popEntry(int xPos, int yPos);
    Cell* popLastEntry();
    void playRecord();
    Cell* popLastCorrectState();

private:
    std::vector<HistoryEntry*> entries;
    Matrix *matrix;
};

#endif // HISTORY_H
