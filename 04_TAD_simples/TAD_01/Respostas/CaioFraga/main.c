#include <stdio.h>
#include "jogada.h"
#include "jogo.h"

int main(){

    tJogada j = LeJogada();
    printf("%d %d", ObtemJogadaX(j), ObtemJogadaY(j));
    return 0;
}