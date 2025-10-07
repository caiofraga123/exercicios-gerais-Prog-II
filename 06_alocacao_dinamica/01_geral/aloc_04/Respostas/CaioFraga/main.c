#include <stdio.h>
#include <stdlib.h>

#include "utils_char2.h"

int main(){

    char *v = CriaVetorTamPadrao();

    AumentaTamanhoVetor(v, TAM_PADRAO);

    ImprimeString(v);

    LiberaVetor(v);

    return 0;
}