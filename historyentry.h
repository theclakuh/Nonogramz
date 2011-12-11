#ifndef HISTORYENTRY_H
#define HISTORYENTRY_H

#include "matrix.h"
#include <string>

class HistoryEntry
{
public:
    HistoryEntry();

private:
    Matrix *matrix;
    std::string name;
    bool undone;
};

#endif // HISTORYENTRY_H
