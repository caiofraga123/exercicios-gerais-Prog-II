#include <stdio.h>
#include "calculadora.h"

int main(){

    float a = 0.0;
    float b = 0.0;

    scanf("%f %f", &a, &b);

    printf("A soma é: %.2f\n", soma(a, b));
    printf("A subtração é: %.2f\n",subtracao(a, b));
    printf("A multiplicação é: %.2f\n",multiplicacao(a, b));
    printf("A divisão é: %.2f\n",divisao(a, b));

    return 0;
} 