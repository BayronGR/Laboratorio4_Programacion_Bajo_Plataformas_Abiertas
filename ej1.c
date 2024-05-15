#include <stdio.h>

// Función para buscar un valor de forma lineal en el arreglo
int busqueda_lineal(int arreglo[], int n, int valor) {
    for (int i = 0; i < n; i++) {
        if (arreglo[i] == valor) {
            return i; // Valor encontrado, retorna la posición
        }
    }
    return -1; // Valor no encontrado
}

// Función para buscar un valor de forma binaria (iterativa) en el arreglo
int busqueda_iterativa(int arreglo[], int n, int valor) {
    int inicio = 0;
    int fin = n - 1;
    while (inicio <= fin) {
        int medio = inicio + (fin - inicio) / 2;
        if (arreglo[medio] == valor) {
            return medio; // Valor encontrado, retorna la posición
        } else if (arreglo[medio] < valor) {
            inicio = medio + 1;
        } else {
            fin = medio - 1;
        }
    }
    return -1; // Valor no encontrado
}