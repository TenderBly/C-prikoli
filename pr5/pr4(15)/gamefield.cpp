#include "gamefield.h"

void GameField::initField(int d)
{
    size = d;
    state = ACTIVE;

    field = new int* [size];
    for (int i = 0; i < size; i++)
        field[i] = new int[size];

    int value = size * size - 1;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            field[i][j] = value;
            value--;
        }
    }

    // остання клітинка — пуста
    field[size - 1][size - 1] = 0;
    emptyRow = size - 1;
    emptyCol = size - 1;

    // якщо розмір парний — міняємо місцями 1 і 2
    if (size % 2 == 0)
    {
        int temp = field[size - 1][size - 3];
        field[size - 1][size - 3] = field[size - 1][size - 2];
        field[size - 1][size - 2] = temp;
    }
}

void GameField::printField()
{
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size; j++)
        {
            if (field[i][j] == 0)
                std::cout << "_\t";
            else
                std::cout << field[i][j] << "\t";
        }
        std::cout << std::endl;
    }
}