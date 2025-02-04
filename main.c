#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 4

// This method clears buffer
void clearBuffer (void) {
    char input;
    while ( (input = getchar()) != '\n' && input != EOF );
}

void setMatrixValues(int *firstMatrixSize, int **firstMatrix) {
    char temp2[200];
    int i;
    int j;
    int *pI = &i;
    int *pJ = &j;

    printf("First matrix size: %d\n", *firstMatrixSize);

    printf("Input elements of matrix 1: ");
    fgets(temp2, sizeof(temp2), stdin);
    char *token = strtok(temp2, " ");

    for(*pI = 0; *pI < *firstMatrixSize; ++*pI) {
        for(*pJ = 0; *pJ < *firstMatrixSize; ++*pJ) {
            printf("I: %d, J: %d\n", *pI, *pJ);
            printf("Token: %d\n", atoi(token));
            firstMatrix[*pI][*pJ] = atoi(token);
            printf("Value: %d\n", firstMatrix[*pI][*pJ]);
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
    setMatrixValues(pSize_matrix_1, matrix_1);

}