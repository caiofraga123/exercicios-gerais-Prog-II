#include <stdio.h>
#include <stdlib.h>
#include "utils_char.h"

int main(){
    int n = 0;

    scanf("%d", &n);

    char *v = CriaVetor(n);

    ImprimeString(v, n);

    LeVetor(v, n);

    ImprimeString(v, n);

    LiberaVetor(v);

    return 0;
}