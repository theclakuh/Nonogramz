#ifndef SOLVESTRATEGY_H
#define SOLVESTRATEGY_H

#include "matrix.h"
#include "history.h"

class SolveStrategy
{
public:
    SolveStrategy();
    virtual History* solve(Matrix *matrix)=0;
};

#endif // SOLVESTRATEGY_H
