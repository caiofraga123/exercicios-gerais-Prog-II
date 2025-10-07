#include <stdio.h>
#include "jogador.h"
#include "tabuleiro.h"

tJogador CriaJogador(int idJogador)
{
    tJogador j;
    j.id = idJogador;
    return j;
}

tTabuleiro JogaJogador(tJogador jogador, tTabuleiro tabuleiro)
{
    if (TemPosicaoLivreTabuleiro(tabuleiro))
    {
        int x, y;
        scanf("%d %d", &x, &y);
        tabuleiro = MarcaPosicaoTabuleiro(tabuleiro, jogador.id);
    }
    return tabuleiro;
}
