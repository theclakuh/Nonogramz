#ifndef PLAYMODE_H
#define PLAYMODE_H

#include "mode.h"
#include "solvestrategy.h"

class PlayMode : public Mode
{
public:
    PlayMode(SolveStrategy *solver);
    PlayMode(SolveStrategy *solver, Matrix *matrix);
    bool testCorrectness();
    void setMatrix(Matrix *matrix);

private:
    SolveStrategy* solver;
    SolveStrategy* getSolver();
    void setSolver(SolveStrategy *solver);
};

#endif // PLAYMODE_H
