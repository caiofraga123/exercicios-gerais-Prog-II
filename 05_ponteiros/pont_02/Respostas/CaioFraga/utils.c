#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

void LeIntervalo(int *m, int *n){
    scanf("%d %d", &m, &n);
}

int EhPrimo(int n){
    int f = n;
    while (f){
        if (n % f == 0){
            break;
            return 0;
        }
        f--;
    }
    return 1;
}

void ObtemMaiorEMenorPrimo(int m, int n, int *menor, int *maior){
    for (int i = m; i < n; i++){
        if (EhPrimo(i)){
            if(i < *menor){
                *menor = i;
            }
            if (i > *maior){
                *maior = i;
            }
        }
    }
}
