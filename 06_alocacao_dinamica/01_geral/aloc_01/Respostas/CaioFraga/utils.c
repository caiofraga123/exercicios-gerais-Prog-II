#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int *CriaVetor(int tamanho){
    int *v = (int *) malloc (tamanho * sizeof(int));
    return v;
}

void LeVetor(int *vetor, int tamanho){
    int i = 0;
    while (i < tamanho){
        scanf("%d", &vetor[i]);
        i++;
    }
}

float CalculaMedia(int *vetor, int tamanho){
    int i = 0;
    float cont = 0;
    while (i < tamanho){
        cont = cont + vetor[i];
        i++;
    }
    return cont/tamanho;
}

void LiberaVetor(int *vetor){
    free(vetor);
}