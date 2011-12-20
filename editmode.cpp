#include "editmode.h"

EditMode::EditMode(SolveStrategy *solver, int height, int width, Level level){
    solver; height; width; level;
}

EditMode::EditMode(SolveStrategy *solver, Matrix *matrix){

}

bool EditMode::testCorrectness(){
    return false;
}

void EditMode::setMatrix(Matrix *matrix){
    matrix;
}

SolveStrategy* EditMode::getSolver(){
    return solver;
}

void EditMode::setSolver(SolveStrategy *solver){
    this->solver = solver;
}
