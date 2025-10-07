#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int **CriaMatriz(int linhas, int colunas){
    int **matriz = (int**) calloc (linhas, sizeof(int*));
    for (int i = 0; i < linhas; i++){
        matriz[i] = (int*) calloc (colunas, sizeof(int));
    }
    return matriz;
}

void LiberaMatriz(int **matriz, int linhas){
    for (int i = 0; i < linhas; i++){
        free(matriz[i]);
    }
    free(matriz);
}

void LeMatriz(int **matriz, int linhas, int colunas){
    for(int i = 0; i < linhas; i++){
        for (int j = 0; j < colunas; j++){
            scanf("%d", &matriz[i][j]);
        }
    }
}

void ImprimeMatrizTransposta(int **matriz, int linhas, int colunas){
    for(int i = 0; i < colunas; i++){
        for (int j = 0; j < linhas; j++){
            printf("%d ", matriz[j][i]);
        }
        printf("\n");
    }
}