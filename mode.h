#ifndef MODE_H
#define MODE_H

#include "matrix.h"
#include "solvestrategy.h"

class Mode
{
public:
    Mode();
    virtual bool testCorrectness()=0;
    virtual void setMatrix(Matrix *matrix)=0;

private:
    virtual SolveStrategy* getSolver()=0;
    virtual void setSolver(SolveStrategy *solver)=0;
};

#endif // MODE_H
