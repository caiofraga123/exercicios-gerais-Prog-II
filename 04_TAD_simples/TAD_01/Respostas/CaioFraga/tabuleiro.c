#include <stdio.h>
#include "tabuleiro.h"

tTabuleiro CriaTabuleiro(){
    tTabuleiro t;
    t.peca1 = 'X';
    t.peca2 = 'O';
    t.pecaVazio = ' ';
    for (int i = 0; i < TAM_TABULEIRO; i++){
        for (int j = 0; j < TAM_TABULEIRO; j++){
            t.posicoes[i][j] = '-';      
        }
    }
    return t;
}

void ImprimeTabuleiro(tTabuleiro tabuleiro){
    for (int i = 0; i < TAM_TABULEIRO; i++){
        for (int j = 0; j < TAM_TABULEIRO; j++){
            printf("%c", tabuleiro.posicoes[i][j]);
        }
        printf("\n");
    }
}

int EhPosicaoValidaTabuleiro(int x, int y){
    if (x < TAM_TABULEIRO && x >= 0 && y < TAM_TABULEIRO && y >= 0){
        return 1;
    } else {
        printf("Posicao invalida (FORA DO TABULEIRO - [%d,%d] )!", x, y);
        return 0;
    }
}

tTabuleiro MarcaPosicaoTabuleiro(tTabuleiro tabuleiro, int peca, int x, int y){
    if(!(EstaMarcadaPosicaoPecaTabuleiro(tabuleiro, x, y, peca))){
        if (peca == 1){
            tabuleiro.posicoes[x][y] = 'X';
        } else {
            tabuleiro.posicoes[x][y] = 'O';
        }
    } else {
        printf("Posicao invalida (OCUPADA - [%d,%d] )!", x, y);
    }
    return tabuleiro;
}

int TemPosicaoLivreTabuleiro(tTabuleiro tabuleiro){
    for (int i = 0; i < TAM_TABULEIRO; i++){
        for (int j = 0; j < TAM_TABULEIRO; j++){
            if (EstaLivrePosicaoTabuleiro(tabuleiro, i, j)){
                return 1;
            }
        }
    }
    return 0;
}

int EstaMarcadaPosicaoPecaTabuleiro(tTabuleiro tabuleiro, int x, int y, int peca){
    char p = '-';
    if (peca == 1){
        p = 'X';
    } else {
        p = 'O';
    }
    if (tabuleiro.posicoes[x][y] == p){
        return 1;
    } else {
        return 0;
    }
}

int EstaLivrePosicaoTabuleiro(tTabuleiro tabuleiro, int x, int y){
    if (tabuleiro.posicoes[x][y] == '-'){
        return 1;
    } else {
        return 0;
    }
}