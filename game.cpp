#include "game.h"

Game::Game(Matrix *matrix){

}

bool Game::chechMatrix(Matrix *matrix){
    return false;
}

Matrix* Game::nextCorrectStep(Matrix *matrix){
    Cell** cells;
    return new Matrix(cells, 0);

}

void Game::start(){
}

void Game::stop(){

}

Matrix* Game::undo(int step){
    Cell** cells;
    return new Matrix(cells, 0);

}
