#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 4

void clearBuffer (void);
void setMatrix2Values(int *row, int *column, int secondMatrix[*row][*column]);
void setMatrix1Values(int *row, int *column, int firstMatrix[*row][*column]);
void setMatrixSize(int *firstMatrixSize, int *secondMatrixSize);
void addMatrixes(int *row, int *column, int firstMatrix[*row][*column], int secondMatrix[*row][*column]);

int main(int argc, char *argv[]) {
    int row;
    int column;
    int *pRow = &row;
    int *pColumn = &column;

    char stringMatrix1[200];
    char stringMatrix2[200];

    setMatrixSize(pRow, pColumn);

    int matrix_1[*pRow][*pColumn];
    int matrix_2[*pRow][*pColumn];

    setMatrix1Values(pRow, pColumn, matrix_1);
    setMatrix2Values(pRow, pColumn, matrix_2);

    addMatrixes(pRow, pColumn, matrix_1, matrix_2);

}

// This method clears buffer
void clearBuffer (void) {
    char input;
    while ( (input = getchar()) != '\n' && input != EOF );
}

void setMatrix2Values(int *row, int *column, int secondMatrix[*row][*column]) {
    char temp3[200];
    int i;
    int j;
    int *pI = &i;
    int *pJ = &j;

    printf("Input elements of matrix 2: ");
    fgets(temp3, sizeof(temp3), stdin);
    char *token = strtok(temp3, " ");

    for(*pI = 0; *pI < *row; ++*pI) {
        for(*pJ = 0; *pJ < *column; ++*pJ) {
            secondMatrix[*pI][*pJ] = atoi(token);
            token = strtok(NULL, " ");
        }
    }

}

void setMatrix1Values(int *row, int *column, int firstMatrix[*row][*column]) {
    char temp2[200];
    int i;
    int j;
    int *pI = &i;
    int *pJ = &j;

    printf("Input elements of matrix 1: ");
    fgets(temp2, sizeof(temp2), stdin);
    char *token = strtok(temp2, " ");

    for(*pI = 0; *pI < *row; ++*pI) {
        for(*pJ = 0; *pJ < *column; ++*pJ) {
            firstMatrix[*pI][*pJ] = atoi(token);
            token = strtok(NULL, " ");
        }
    }

}

void setMatrixSize(int *row, int *column) {
    char temp[200];
    printf("Input the size: ");
    fgets(temp, sizeof(temp), stdin);

    char *token = strtok(temp, " ");

    for(int i = 0; i < 2; i++) {
        if(i == 0) {
            *row = atoi(token);
        } else {
            *column = atoi(token);
        }
        token = strtok(NULL, " ");
    }
}

void addMatrixes(int *row, int *column, int firstMatrix[*row][*column], int secondMatrix[*row][*column]) {
    int result[*row][*column];

    int i;
    int j;
    int *pI = &i;
    int *pJ = &j;

    for(*pI = 0; *pI < *row; ++*pI) {
        for(*pJ = 0; *pJ < *column; ++*pJ) {
            result[*pI][*pJ] = firstMatrix[*pI][*pJ] + secondMatrix[*pI][*pJ];
        }
    }

    printf("The sum is: \n");
    for(*pI = 0; *pI < *row; ++*pI) {
        for(*pJ = 0; *pJ < *column; ++*pJ) {
            printf("%d ", result[*pI][*pJ]);
        }
        printf("\n");
    }

}