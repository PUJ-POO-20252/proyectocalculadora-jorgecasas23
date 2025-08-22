#include <stdio.h>
#include "matematicas.h"

int main() {
    int x = 10;
    int y = 4;
    int resultadoSuma = sumar(x,y);
    int resultadoResta = restar(x,y);
    int resultadoMultiplicacion = multiplicar(x,y);
    int resultadoDivision = dividir(x,y);

    printf("Suma: %d\n", resultadoSuma);
    printf("Resta: %d\n", resultadoResta);
    printf("Multiplicacion: %d\n", resultadoMultiplicacion);
    printf("Division: %d\n", resultadoDivision);
    return 0;
}
