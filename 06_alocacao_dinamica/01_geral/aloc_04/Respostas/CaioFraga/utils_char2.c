#include <stdio.h>
#include <stdlib.h>
#include <assert.h>

#include "utils_char2.h"

char *CriaVetorTamPadrao(){
    char *v = (char*) malloc (sizeof(char) * (TAM_PADRAO + 1));
    assert(v && "Erro ao alocar vetor");
    for (int i = 0; i < TAM_PADRAO; i++){
        v[i] = '_';
    }
    v[TAM_PADRAO] = '\0';

    return v;
}

char *AumentaTamanhoVetor(char* vetor, int tamanhoantigo){
    vetor = (char*) realloc(vetor, sizeof(char) * (tamanhoantigo + TAM_PADRAO + 1));
    /*
    for (int i = 0; i < tamanhoantigo + TAM_PADRAO; i++){
        vetor[tamanhoantigo + i] = '_';
    }
    vetor[tamanhoantigo + TAM_PADRAO] = '\0';*/
    return vetor;
}

char* LeVetor(char *vetor, int *tamanho){
    int tam_padrao = TAM_PADRAO;
    while (tamanho > &tam_padrao){
        AumentaTamanhoVetor(vetor, tam_padrao);
        tam_padrao = tam_padrao + 10;
    }
    return vetor;
}

void ImprimeString(char *vetor){
    int cont = 0;
    while (vetor[cont] != '\0'){
        printf("%c", vetor[cont]);
        cont++;
    }
}

void LiberaVetor(char *vetor){
    free(vetor);
}
