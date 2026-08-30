// 2OLIDTS-EstefaniaMendez-04.1.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
using namespace std;

const int numero_filas = 3;
const int numero_columnas = 3;

void imprimir_matriz(int matriz[numero_filas][numero_columnas]) {
    cout << "\nLos valores almacenados en la matriz de ["
        << numero_filas << "][" << numero_columnas << "] son:\n";
    for (int f = 0; f < numero_filas; f++) {
        for (int c = 0; c < numero_columnas; c++) {
            cout << matriz[f][c] << " ";
        }
        cout << endl; // salto de línea al terminar cada fila
    }
}

void capturar_valores(int matriz[numero_filas][numero_columnas]) {
    for (int f = 0; f < numero_filas; f++) {
        for (int c = 0; c < numero_columnas; c++) {
            cout << "Ingrese el valor de la posición ["
                << f << "][" << c << "]: ";
            cin >> matriz[f][c];
        }
    }
}

int main() {
    int matriz_bidimensional[numero_filas][numero_columnas];
    cout << "Actividad 04 - Arreglo Bidimensional (Matriz de MxN)\n";
    capturar_valores(matriz_bidimensional);
    imprimir_matriz(matriz_bidimensional);
    return 0;
}
