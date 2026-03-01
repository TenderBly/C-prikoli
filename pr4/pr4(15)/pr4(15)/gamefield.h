#pragma once

#define MIN_SIZE 3
#define MAX_SIZE 10

struct GameField
{
    int size;          // розмір поля
    int** field;       // динамічний масив
    int emptyRow;      // рядок пустої клітинки
    int emptyCol;      // колонка пустої клітинки
};