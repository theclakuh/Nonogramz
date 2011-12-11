#ifndef GAME_H
#define GAME_H

#include "history.h"
#include "mode.h"
#include "level.h"
#include "matrix.h"

class Game
{
public:
    Game(Matrix *matrix);
    void start();
    void stop();
    Matrix* undo(int step);
    Matrix* nextCorrectStep(Matrix *matrix);
    bool chechMatrix(Matrix *matrix);

private:
    History *history;
    Mode *mode;
    Level *level;
};

#endif // GAME_H


//Transactionrollback
