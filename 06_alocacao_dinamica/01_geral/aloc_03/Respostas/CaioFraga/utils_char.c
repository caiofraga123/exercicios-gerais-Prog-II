#include <stdio.h>
#include <stdlib.h>
#include "utils_char.h"

char *CriaVetor(int tamanho){
    tamanho = tamanho + 1;
    char *v = (char*) malloc ((tamanho) * sizeof(char));
    for (int i = 0; i < tamanho; i++){
        v[i] = '_';
    }
    v[tamanho] = '\0';
    return v;
}

void LeVetor(char *vetor, int tamanho){
    int i = 0;
    char c;
    scanf("%*c");
    scanf("%s", vetor);
    while (c != '\n' && i < tamanho){
        vetor[i] = c;
        i++;
        scanf("%c", &c);
    }
}

void ImprimeString(char *vetor, int tamanho){
    for (int i = 0; i < tamanho; i++){
        printf("%c", vetor[i]);
    }
    printf("\n");
}

void LiberaVetor(char *vetor){
    free(vetor);
}
