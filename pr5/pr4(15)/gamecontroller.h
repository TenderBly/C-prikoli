#pragma once
#include "gamefield.h"

struct GameController
{
    GameField gameField;
    int movesCount;

    void startGame();
    int getUserInput();
    void gameLoop();
};