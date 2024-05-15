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