Arreglo-unidimensional.c

#include <stdio.h>

#define ROWS 9
#define COLS 9

void fillMatrix(int matrix[ROWS][COLS], int start) {
    int value = start;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = value++;
        }
    }
}

int searchMatrix(int matrix[ROWS][COLS], int value, int *row, int *col) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            if (matrix[i][j] == value) {
                *row = i;
                *col = j;
                return 1;  // Valor encontrado
            }
        }
    }
    return 0;  // Valor no encontrado
}

int main() {
    int matrix[ROWS][COLS];
    int startNumber, searchNumber;
    int foundRow, foundCol;

    // Pedir al usuario que ingrese el número inicial
    printf("Ingrese el número inicial para llenar la matriz: ");
    scanf("%d", &startNumber);

    // Llenar la matriz con números secuenciales a partir del número inicial
    fillMatrix(matrix, startNumber);

    // Pedir al usuario que ingrese el número a buscar en la matriz
    printf("Ingrese el número que desea buscar en la matriz: ");
    scanf("%d", &searchNumber);

    // Buscar el número en la matriz
    if (searchMatrix(matrix, searchNumber, &foundRow, &foundCol)) {
        printf("Valor encontrado en la posición [%d][%d]\n", foundRow, foundCol);
    } else {
        printf("No encontrado\n");
    }

    return 0;
}
  
