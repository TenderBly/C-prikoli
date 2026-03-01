#pragma once
#include "gamefield.h"

struct GameController
{
    GameField gameField;
    int movesCount;

    void initGame(int size);
    void printField();
    bool makeMove(char direction);
    bool checkWin();
};