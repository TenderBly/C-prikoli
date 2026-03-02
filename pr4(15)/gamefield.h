#pragma once
#include <iostream>

#define MIN_SIZE 3
#define MAX_SIZE 10

// Перелічення станів гри
enum GameState
{
    ACTIVE,
    WIN,
    USER_ABORT
};

struct GameField
{
    int size;
    int** field;
    int emptyRow;
    int emptyCol;
    GameState state;

    void initField(int d);
    void printField();
    bool canMove(int row, int col);
    void makeMove(int tile);
    bool checkWin();
};