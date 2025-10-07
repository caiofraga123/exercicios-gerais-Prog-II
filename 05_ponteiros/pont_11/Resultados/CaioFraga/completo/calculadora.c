#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

float soma(float a, float b){
    return a + b;
}

float subtracao(float a, float b){
    return a - b;
}

float multiplicacao(float a, float b){
    return a*b;
}

float divisao(float a, float b){
    if (b != 0){
        return a/b;
    } else {
        printf("Operacao invalida");
    }
}

float Calcular(float num1, float num2, CalculatoraCallback operacao){
    float resultado = operacao(num1, num2);
    return resultado;
}
