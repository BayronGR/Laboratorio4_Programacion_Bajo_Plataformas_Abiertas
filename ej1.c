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

// Función para buscar un valor de forma binaria (recursiva) en el arreglo
int busqueda_recursiva(int arreglo[], int inicio, int fin, int valor) {
    if (inicio > fin) {
        return -1; // Valor no encontrado
    }
    int medio = inicio + (fin - inicio) / 2;
    if (arreglo[medio] == valor) {
        return medio; // Valor encontrado, retorna la posición
    } else if (arreglo[medio] < valor) {
        return busqueda_recursiva(arreglo, medio + 1, fin, valor);
    } else {
        return busqueda_recursiva(arreglo, inicio, medio - 1, valor);
    }
}

int main() {
    int arreglo[] = {2, 4, 6, 23, 56, 79};
    int n = sizeof(arreglo) / sizeof(arreglo[0]);

    int valor;
    printf("Ingrese un valor entero: ");
    scanf("%d", &valor);

    // Búsqueda lineal
    int posicion_lineal = busqueda_lineal(arreglo, n, valor);
    if (posicion_lineal != -1) {
        printf("Valor encontrado en la posición %d (búsqueda lineal).\n", posicion_lineal);
    } else {
        printf("Valor no encontrado (búsqueda lineal).\n");
    }

    // Búsqueda binaria iterativa
    int posicion_iterativa = busqueda_iterativa(arreglo, n, valor);
    if (posicion_iterativa != -1) {
        printf("Valor encontrado en la posición %d (búsqueda binaria iterativa).\n", posicion_iterativa);
    } else {
        printf("Valor no encontrado (búsqueda binaria iterativa).\n");
    }

    // Búsqueda binaria recursiva
    int posicion_recursiva = busqueda_recursiva(arreglo, 0, n - 1, valor);
    if (posicion_recursiva != -1) {
        printf("Valor encontrado en la posición %d (búsqueda binaria recursiva).\n", posicion_recursiva);
    } else {
        printf("Valor no encontrado (búsqueda binaria recursiva).\n");
    }

    return 0;
}

