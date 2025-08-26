//
// Created by jorge on 8/19/2025.
//

#ifndef MI_PROYECTO_MATEMATICAS_H
#define MI_PROYECTO_MATEMATICAS_H
#include <string>
#include <iostream>

// Declaraciones:
int sumar(int a, int b);
int restar(int a, int b);
int multiplicar(int a, int b);
int dividir(int a, int b);
void sumarMatrices (const int (&a)[2][3], const int (&b)[2][3], int (&resultado)[2][3]);
void imprimirMatriz(const std::string titulo, const int (&mat)[2][3]);

#endif //MI_PROYECTO_MATEMATICAS_H