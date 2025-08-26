#include <stdio.h>
#include <iostream>
#include "matematicas.h"

int main() {
    int x;
    int y;
    std::cin >> x;
    std::cin >> y;
    int resultadoSuma = sumar(x,y);
    int resultadoResta = restar(x,y);
    int resultadoMultiplicacion = multiplicar(x,y);
    int resultadoDivision = dividir(x,y);
    int matriz1[2][3] = {{7, 8, 5},
        {2, 6, 9}};
    int matriz2[2][3] = {{3, 2, 5},
        {4, 3, 9}};
    int matriz3[2][3];
    std::string titulo1 = "La primera matriz: ";
    std::string titulo2 = "La segunda matriz: ";
    std::string titulo3 = "La tercera matriz: ";

    printf("Suma: %d\n", resultadoSuma);
    printf("Resta: %d\n", resultadoResta);
    printf("Multiplicacion: %d\n", resultadoMultiplicacion);
    printf("Division: %d\n", resultadoDivision);
    sumarMatrices(matriz1, matriz2, matriz3);
    imprimirMatriz(titulo1, matriz1);
    imprimirMatriz(titulo2, matriz2);
    imprimirMatriz(titulo3, matriz3);
    return 0;
}
