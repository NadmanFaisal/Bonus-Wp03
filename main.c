#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 4

// This method clears buffer
void clearBuffer (void) {
    char input;
    while ( (input = getchar()) != '\n' && input != EOF );
}

void setMatrix2Values(int *secondMatrixSize, int (*secondMatrix)[*secondMatrixSize]) {
    char temp3[200];
    int i;
    int j;
    int *pI = &i;
    int *pJ = &j;

    printf("Input elements of matrix 2: ");
    fgets(temp3, sizeof(temp3), stdin);
    char *token = strtok(temp3, " ");

    for(*pI = 0; *pI < *secondMatrixSize; ++*pI) {
        for(*pJ = 0; *pJ < *secondMatrixSize; ++*pJ) {
            secondMatrix[*pI][*pJ] = atoi(token);
            token = strtok(NULL, " ");
        }
    }

}

void setMatrix1Values(int *firstMatrixSize, int (*firstMatrix)[*firstMatrixSize]) {
    char temp2[200];
    int i;
    int j;
    int *pI = &i;
    int *pJ = &j;

    printf("Input elements of matrix 1: ");
    fgets(temp2, sizeof(temp2), stdin);
    char *token = strtok(temp2, " ");

    for(*pI = 0; *pI < *firstMatrixSize; ++*pI) {
        for(*pJ = 0; *pJ < *firstMatrixSize; ++*pJ) {
            firstMatrix[*pI][*pJ] = atoi(token);
            token = strtok(NULL, " ");
        }
    }

}

void setMatrixSize(int *firstMatrixSize, int *secondMatrixSize) {
    char temp[200];
    printf("Input the size: ");
    fgets(temp, sizeof(temp), stdin);

    char *token = strtok(temp, " ");

    for(int i = 0; i < 2; i++) {
        if(i == 0) {
            *firstMatrixSize = atoi(token);
        } else {
            *secondMatrixSize = atoi(token);
        }
        token = strtok(NULL, " ");
    }
}

int main(int argc, char *argv[]) {
    int size_matrix_1;
    int size_matrix_2;
    int *pSize_matrix_1 = &size_matrix_1;
    int *pSize_matrix_2 = &size_matrix_2;

    char stringMatrix1[200];
    char stringMatrix2[200];

    setMatrixSize(pSize_matrix_1, pSize_matrix_2);

    int matrix_1[*pSize_matrix_1][*pSize_matrix_1];
    int matrix_2[*pSize_matrix_2][*pSize_matrix_2];

    printf("Size of matrix 1: %d\n", *pSize_matrix_1);
    setMatrix1Values(pSize_matrix_1, matrix_1);
    setMatrix2Values(pSize_matrix_2, matrix_2);

}