#include <time.h>
#include <stdlib.h>
#include "matrix.h"
#include <stdio.h>

void matRandomChar(char mat[][COLS], int rows)
{
    int i,j;
    for (i=0; i<rows; i++){
    for (j=0; j<COLS; j++)
        mat[i][j] = 'A'+rand()%('Z'-'A'+1);
    }
}

void smallMatRandomChar(char smallMat[][SIZE],int size)
{
    int i,j;
    for (i=0; i<size; i++){
    for (j=0; j<SIZE; j++)
        smallMat[i][j] = 'A'+rand()%('Z'-'A'+1);
    }
}

void printMat(char mat[][COLS],int rows)
{
    int i,j;
	for(i=0;i<rows;i++){
	        for(j=0;j<COLS;j++){
	            printf("%c",mat[i][j]);
	        }
	        printf("\n");
	    }
}

void printSmallMat(char smallMat[][SIZE], int rows)
{
    int i,j;
	for(i=0;i<rows;i++){
	        for(j=0;j<SIZE;j++){
	            printf("%c",smallMat[i][j]);
	        }
	        printf("\n");
	    }
}


void Count(const char mat[][COLS], char c, int *count)
{
  int i, j;
  int counter = 0;  // Initialize the count answer cell
  for (i = 0; i < ROWS; i++) {
    for (j = 0; j < COLS; j++) {
      if (mat[i][j] == c)
        counter++;
    }
   *count = counter; // Dereference the pointer to count result cell, and set its value to count
  }
}

void buildResMat(const char mat[][COLS], const char smallMat[][SIZE],int resMat[][SIZE])
{
  for (int i = 0; i < SIZE; i++) {
    for (int j = 0; j < SIZE; j++) {
      Count(mat, smallMat[i][j], &resMat [i][j]);
    }
  }
}

void PrintSquareMatrix(int matrix[][SIZE],int size )
{
  for (int i = 0; i <size; i++) {
    for (int j = 0; j < SIZE; j++) {
      printf("%2d ", matrix[i][j]);
    }
    printf("\n");
  }
}
