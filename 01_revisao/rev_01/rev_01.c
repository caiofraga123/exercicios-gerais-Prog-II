#include <stdio.h>

typedef struct{
    float xTiro;
    float yTiro;
    float rTiro;
}tTiro;

typedef struct{
    float xAlvo;
    float yAlvo;
    float rAlvo;
}tAlvo;

tTiro inicializaTiro(tTiro tiro){

    printf("Insira as coordenadas do tiro: ");
    scanf("%f %f %f", &tiro.xTiro, &tiro.yTiro, &tiro.rTiro);

    return tiro;
}

tAlvo inicializaAlvo(tAlvo alvo){

    printf("Insira as coordenadas do tiro: ");
    scanf("%f %f %f", &alvo.xAlvo, &alvo.yAlvo, &alvo.rAlvo);

    return alvo;
}

void imprimeTiroAlvo(tTiro tiro, tAlvo alvo){
    printf("As coordenadas do tiro são: %.2f %.2f %.2f", tiro.xTiro, tiro.yTiro, tiro.rTiro);
    printf("As coordenadas do alvo são: %.2f %.2f %.2f", alvo.xAlvo, alvo.yAlvo, alvo.rAlvo);
}



int main(){
    
    tTiro tiro = inicializaTiro(tiro);
    tAlvo alvo = inicializaAlvo(alvo);

    imprimeTiroAlvo(tiro, alvo);

    return 0;
}