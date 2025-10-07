#include <stdio.h>
#include <stdlib.h>
#include "vetor.h"

void LeVetor(Vetor *vetor){
    int tam = 0;
    scanf("%d", &tam);
    vetor->tamanhoUtilizado = tam;
    for (int i = 0; i < tam; i++){
        int n = 0;
        scanf("%d", &vetor->elementos[i]);
    }
}

int AplicarOperacaoVetor(Vetor *vetor, Operation op){
    int resultado = vetor->elementos[0];
    for (int i = 1; i < vetor->tamanhoUtilizado; i++){
        resultado = op(resultado, vetor->elementos[i]);
    }
    return resultado;
}