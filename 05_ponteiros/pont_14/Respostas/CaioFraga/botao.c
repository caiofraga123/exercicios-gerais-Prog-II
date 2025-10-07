#include <stdio.h>
#include <stdlib.h>

#include "botao.h"

void SetarTexto(Botao *b, char *novoTexto){
    int cont = 0;
    for (int i = 0; i < MAX_TAM_TEXTO; i++){
        cont = cont + 1;
    }
    if (cont > 30)
}