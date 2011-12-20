#include "playmode.h"

PlayMode::PlayMode(SolveStrategy *solver) : solver(solver){

}

PlayMode::PlayMode(SolveStrategy *solver, Matrix *matrix) : solver(solver){
    matrix;
}

SolveStrategy* PlayMode::getSolver(){
    return solver;
}

void PlayMode::setMatrix(Matrix *matrix){
    matrix;
}

void PlayMode::setSolver(SolveStrategy *solver){
    this->solver = solver;
}

bool PlayMode::testCorrectness(){
    return false;
}


