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