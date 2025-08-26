//
// Created by jorge on 8/19/2025.
//

#include "matematicas.h"

int sumar (int a, int b) {
    return a + b;
}

int restar(int a, int b) {
    return a - b;
}

int multiplicar(int a, int b){
    return a * b;
}

int dividir(int a, int b){
    return a/b;
}

void sumarMatrices (const int (&a)[2][3], const int (&b)[2][3], int (&resultado)[2][3]){
    int i, j;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            resultado[i][j] = a[i][j] + b[i][j];
        }
    }
}

void imprimirMatriz(const std::string titulo, const int (&mat)[2][3]){
    std::cout << titulo << std::endl;
    int i , j;
    for (i = 0; i < 2; i++){
        for (j = 0; j < 3; j++){
            std::cout << mat[i][j] << " ";
        }
        std::cout << std::endl; 
    } 
}