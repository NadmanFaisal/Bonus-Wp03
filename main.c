#include <stdio.h>
#define MAX_SIZE 4;

// This method clears buffer
void clearBuffer (void) {
    char input;
    while ( (input = getchar()) != '\n' && input != EOF );
}

int main(int argc, char *argv[]) {
    int size_matrix_1;
    int size_matrix_2;

    int *pSize_matrix_1 = &size_matrix_1;
    int *pSize_matrix_2 = &size_matrix_2;

    printf("Input the size: ");
    scanf("%d %d", pSize_matrix_1, pSize_matrix_2);

    int matrix_1[*pSize_matrix_1][*pSize_matrix_2];

    printf("Size 1: %d, size 2: %d\n", size_matrix_1, size_matrix_2);
}