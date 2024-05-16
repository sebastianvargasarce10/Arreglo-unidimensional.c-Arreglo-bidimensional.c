#include <stdio.h>
#define ARRAY_SIZE 88

void fillArray(int arr[], int size, int start) {
    for (int i = 0; i < size; i++) {
        arr[i] = start + i;
    }
}

int searchArray(int arr[], int size, int value) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == value) {
            return i;  // Retorna la posición si encuentra el valor
        }
    }
    return -1;  // Retorna -1 si no encuentra el valor
}

int main() {
    int array[ARRAY_SIZE];
    int startNumber, searchNumber, result;

    // Pedir al usuario que ingrese el número inicial
    printf("Ingrese el número inicial para llenar el arreglo: ");
    scanf("%d", &startNumber);

    // Llenar el arreglo con números secuenciales a partir del número inicial
    fillArray(array, ARRAY_SIZE, startNumber);

    // Pedir al usuario que ingrese el número a buscar en el arreglo
    printf("Ingrese el número que desea buscar en el arreglo: ");
    scanf("%d", &searchNumber);

    // Buscar el número en el arreglo
    result = searchArray(array, ARRAY_SIZE, searchNumber);

    // Imprimir el resultado de la búsqueda
    if (result != -1) {
        printf("Valor encontrado en la posición %d\n", result);
    } else {
        printf("No encontrado\n");
    }

    return 0;
}
