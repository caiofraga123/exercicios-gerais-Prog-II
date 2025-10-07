#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main(){
    char c = "";
    int flag = 1;
    int num1, num2;

    scanf("%c", &c);

    scanf("%d %d", &num1, &num2);

    (float) num1;
    (float) num2;

    while (flag){
        if (c == "a"){
            printf("(%.2f + %.2f) = %.2f", num1, num2, Calcular(num1, num2, soma));
        }

        if (c == "s"){
            printf("(%.2f - %.2f) = %.2f", num1, num2, Calcular(num1, num2, subtracao));
        }

        if (c == "m"){
            printf("(%.2f x %.2f) = %.2f", num1, num2, Calcular(num1, num2, multiplicacao));
        }

        if (c == "d"){
            printf("(%.2f / %.2f) = %.2f", num1, num2, Calcular(num1, num2, divisao));
        }
    }
    return 0;
}