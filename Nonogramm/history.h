#ifndef HISTORY_H
#define HISTORY_H

#include "historyentry.h"
#include "matrix.h"
#include <vector>

class History
{
public:
    History();
    void newEntriy(Matrix *map);
    void marked(std::string name);
    Matrix* popEntry(std::string name);
    Matrix* popLastEntry();
    void playRecord();
    Matrix* popLastCorrectState();

private:
    std::vector<HistoryEntry*> entries;
};

#endif // HISTORY_H
