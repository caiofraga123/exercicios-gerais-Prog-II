#include <stdio.h>

int main(){

    int *n = NULL;
    int v1 = 0;

    n = &v1;

    n = n + 1;

    printf("O valor acessado: %d", v1);

    return 0;
}