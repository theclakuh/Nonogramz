#include "playmode.h"

PlayMode::PlayMode(SolveStrategy *solver){

}

PlayMode::PlayMode(SolveStrategy *solver, Matrix *matrix){

}

SolveStrategy* PlayMode::getSolver(){
    return solver;
}

void PlayMode::setMatrix(Matrix *matrix){

}

void PlayMode::setSolver(SolveStrategy *solver){
}

bool PlayMode::testCorrectness(){
    return false;
}


