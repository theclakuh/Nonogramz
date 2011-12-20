#include "game.h"

Game::Game(Matrix *matrix){

}

bool Game::chechMatrix(Matrix *matrix){
    matrix;
    return false;
}

Matrix* Game::nextCorrectStep(Matrix *matrix){
    matrix;
    std::vector<Cell*> cells;
    return new Matrix(cells, 0);

}

void Game::start(){
}

void Game::stop(){

}

Matrix* Game::undo(int step){
    step;
    std::vector<Cell*> cells;
    return new Matrix(cells, 0);

}
