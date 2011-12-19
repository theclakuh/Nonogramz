#include "game.h"

Game::Game(Matrix *matrix){

}

bool Game::chechMatrix(Matrix *matrix){
    return false;
}

Matrix* Game::nextCorrectStep(Matrix *matrix){
    std::vector<Cell*> cells;
    return new Matrix(cells, 0);

}

void Game::start(){
}

void Game::stop(){

}

Matrix* Game::undo(int step){
    std::vector<Cell*> cells;
    return new Matrix(cells, 0);

}
