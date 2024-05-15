#include <stdio.h>

// Función para encontrar el valor mínimo en el arreglo
int encontrar_minimo(int arreglo[], int longitud) {
    int minimo = arreglo[0];
    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] < minimo) {
            minimo = arreglo[i];
        }
    }
    return minimo;
}

// Función para encontrar el valor máximo en el arreglo
int encontrar_maximo(int arreglo[], int longitud) {
    int maximo = arreglo[0];
    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] > maximo) {
            maximo = arreglo[i];
        }
    }
    return maximo;
}

// Función para encontrar el valor mínimo y máximo utilizando punteros
void encontrarMinMax(int *arreglo, int longitud, int *minimo, int *maximo) {
    *minimo = *maximo = arreglo[0];
    for (int i = 1; i < longitud; i++) {
        if (arreglo[i] < *minimo) {
            *minimo = arreglo[i];
        }
        if (arreglo[i] > *maximo) {
            *maximo = arreglo[i];
        }
    }
}

int main() {
    int arreglo[] = {21, 24, 65, 3, 56, 12, 35, 15};
    int longitud = sizeof(arreglo) / sizeof(arreglo[0]);

    // Encontrar el valor mínimo y máximo
    int minimo, maximo;
    encontrarMinMax(arreglo, longitud, &minimo, &maximo);

    printf("Valor mínimo: %d\n", minimo);
    printf("Valor máximo: %d\n", maximo);

    return 0;
}
