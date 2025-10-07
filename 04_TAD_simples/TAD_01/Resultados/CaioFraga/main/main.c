#include <stdio.h>
#include "tabuleiro.h"
#include "jogada.h"

int main(){

    tJogada j = LeJogada();
    printf("%d %d", ObtemJogadaX(j), ObtemJogadaY(j));
    return 0;
}