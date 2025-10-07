#include <stdio.h>
#include <stdlib.h>
#include "utils.h"

int main(){
    int n = 0;
    float media = 0.0;

    scanf("%d", &n);

    int *v = CriaVetor(n);

    LeVetor(v, n);
    
    media = CalculaMedia(v, n);

    printf("%.2f\n", media);

    LiberaVetor(v);

    return 0;
}