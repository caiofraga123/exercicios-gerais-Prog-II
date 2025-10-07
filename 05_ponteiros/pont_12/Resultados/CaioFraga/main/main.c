#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

int soma(int i, int j){
    return i + j;
}

int produto(int i, int j){
    return i * j;
}

int main(){

    Vetor v; 
    LeVetor(&v);

    printf("Soma: %d\n", AplicarOperacaoVetor(&v, soma));
    printf("Produto: %d\n", AplicarOperacaoVetor(&v, produto));

    return 0;
}