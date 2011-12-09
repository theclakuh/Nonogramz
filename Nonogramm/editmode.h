#ifndef EDITMODE_H
#define EDITMODE_H

#include "mode.h"
#include "solvestrategy.h"
#include "level.h"
#include "matrix.h"

class EditMode : public Mode
{
public:
    EditMode(SolveStrategy *solver, int height, int width, Level level);
    EditMode(SolveStrategy *solver, Matrix *matrix);
    bool testCorrectness();
    void setMatrix(Matrix *matrix);


private:
    SolveStrategy *solver;
    Level level;

    SolveStrategy* getSolver();
    void setSolver(SolveStrategy *solver);
};

#endif // EDITMODE_H
