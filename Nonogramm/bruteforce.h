#ifndef BRUTEFORCE_H
#define BRUTEFORCE_H

#include "solvestrategy.h"

class BruteForce : public SolveStrategy
{
public:
    BruteForce();
    History* solve(Matrix *matrix);
};

#endif // BRUTEFORCE_H
