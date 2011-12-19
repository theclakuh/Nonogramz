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
<<<<<<< HEAD
    History();
    void newEntriy(Cell* cell,std::string name);
    HistoryEntry* popEntry(std::string name);
    HistoryEntry* popLastEntry();
    void playRecord();
    HistoryEntry* popLastCorrectState(Matrix* currentMatrix); //will run over the entries an look for the last one
                                                      //in which all cells are correct selected like the matrix suggests
=======
    History(Matrix *m);
    History();      //Dummy should be removed
    ~History();
    void newEntry(Cell* cell,std::string name);
    void marked(std::string name);
    HistoryEntry* popEntry(int number);
    HistoryEntry* popLastEntry();
    void playRecord();
    HistoryEntry* popLastCorrectState();
>>>>>>> 264c362786c90f0c10724768aab030d50f124f17

private:
    std::vector<HistoryEntry*> entries;
};

#endif // HISTORY_H
