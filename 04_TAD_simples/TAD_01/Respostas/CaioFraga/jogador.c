#include <stdio.h>
#include "jogador.h"
#include "tabuleiro.h"
#include "jogada.h"

tJogador CriaJogador(int idJogador)
{
    tJogador j;
    j.id = idJogador;
    return j;
}

tTabuleiro JogaJogador(tJogador jogador, tTabuleiro tabuleiro)
{
    tJogada jogada = LeJogada();
    int cont = 0;
    if (TemPosicaoLivreTabuleiro(tabuleiro))
    {
        if (EhPosicaoValidaTabuleiro(ObtemJogadaX(jogada), ObtemJogadaY(jogada))){
            if (cont % 2)tabuleiro = MarcaPosicaoTabuleiro(tabuleiro, tabuleiro.peca2);
        }
    }
    return tabuleiro;
}

int VenceuJogador(tJogador jogador, tTabuleiro tabuleiro);
