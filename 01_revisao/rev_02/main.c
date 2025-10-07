#include <stdio.h>
#include <stdlib.h>

int main(){

    int n = 0;
    int contNumeros = 1;
    int cont = 1;

    scanf("%d", &n);

    int matriz[n][n];

    for (int i = 0; i < n; i++){
        int tam = n - cont;
        cont++;
        for (int j = 0; j < n - tam; j++){
            matriz[i][j] = contNumeros;
            printf("%d ", matriz[i][j]);
            contNumeros++;
        }
        printf("\n");
    }

    return 0;
}