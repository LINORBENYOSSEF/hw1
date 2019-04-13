#pragma once
#define SIZE 4
#define ROWS 3
#define COLS 20

void matRandomChar(char mat[][COLS], int rows);
void smallMatRandomChar(char smallMat[][SIZE],int size);

void printMat(char mat[][COLS],int rows);
void printSmallMat(char smallMat[][SIZE], int rows);

void Count(const char mat[][COLS], char c, int *count);
void buildResMat(const char mat[][COLS], const char smallMat[][SIZE],int resMat[][SIZE]);

void PrintSquareMatrix(int matrix[][SIZE],int size );
