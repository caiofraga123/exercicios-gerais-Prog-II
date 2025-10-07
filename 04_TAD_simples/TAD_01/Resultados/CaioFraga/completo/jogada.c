#include <stdio.h>
#include "jogada.h"

tJogada LeJogada(){
    tJogada j;
    if (scanf("%d %d", &j.x, &j.y) == 2){
        j.sucesso = 1;
    } else {
        j.sucesso = 0;
    }
    return j;
}

int ObtemJogadaX(tJogada jogada){
    return jogada.x;
}

int ObtemJogadaY(tJogada jogada){
    return jogada.y;
}

int FoiJogadaBemSucedida(tJogada jogada){
    if (jogada.sucesso == 1){
        return 1;
    } else {
        return 0;
    }
}