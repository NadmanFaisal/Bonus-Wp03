#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX_SIZE 4;

// This method clears buffer
void clearBuffer (void) {
    char input;
    while ( (input = getchar()) != '\n' && input != EOF );
}

void takeInputs(int *firstMatrixSize, int *secondMatrixSize) {
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

    takeInputs(pSize_matrix_1, pSize_matrix_2);

    int matrix_1[2][2];
    int matrix_2[2][2];


}