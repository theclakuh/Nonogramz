#include "editmode.h"

EditMode::EditMode(SolveStrategy *solver, int height, int width, Level level){

}

EditMode::EditMode(SolveStrategy *solver, Matrix *matrix){

}

bool EditMode::testCorrectness(){
    return false;
}

void EditMode::setMatrix(Matrix *matrix){

}

SolveStrategy* EditMode::getSolver(){
    return solver;
}

void EditMode::setSolver(SolveStrategy *solver){

}
