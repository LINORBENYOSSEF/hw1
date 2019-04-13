#include <time.h>
#include <stdlib.h>
#include "matrix.h"
#include <stdio.h>
int main()
{
    char smallMat[SIZE][SIZE];
    char mat[ROWS][COLS];

    srand((unsigned int)time(NULL));
    matRandomChar(mat,ROWS);
    printf("Big matrix:\n");
    printMat(mat,ROWS);

    smallMatRandomChar(smallMat,SIZE);
    printf("Small matrix:\n");
    printSmallMat(smallMat,SIZE);

    int resMat[SIZE][SIZE];
    buildResMat(mat, smallMat, resMat);

    PrintSquareMatrix(resMat,SIZE);
    return 0;
}
