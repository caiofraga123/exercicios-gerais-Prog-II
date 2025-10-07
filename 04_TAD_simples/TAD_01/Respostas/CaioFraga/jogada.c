#include <stdio.h>
#include "jogada.h"

tJogada LeJogada(){
    tJogada j;
    if (FoiJogadaBemSucedida(j)){
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
    int x, y;
    if (scanf("%d %d", &x, &y) == 2){
        return 1;
    }
    return 0;
}