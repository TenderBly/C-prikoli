#include <iostream>
#include "gamefield.h"

int main()
{
    std::cout << "Game Fifteen\n\n";

    GameField gf;
    gf.initField(4);
    gf.printField();

    return 0;
}