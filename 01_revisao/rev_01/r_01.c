#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct{
    float xTiro, yTiro, rTiro;
}tTiro;

typedef struct{
    float xCirculo, yCirculo, rCirculo;
}tCirculo;

tTiro CriaTiro(float xTiro, float yTiro, float rTiro);

float BuscaXdoTiro(tTiro t);

float BuscaYdoTiro(tTiro t);

float BuscaRdoTiro(tTiro t);

tCirculo CriaCirculo(float xCirculo, float yCirculo, float rCirculo);

float BuscaXdoCirculo(tCirculo c);

float BuscaYdoCirculo(tCirculo c);

float BuscaRdoCirculo(tCirculo c);

int TiroAcertouAlvo(tTiro t, tCirculo c);

float DistanciaTiroAlvo(tTiro t, tCirculo c);

int main(){

    float xTiro, yTiro, rTiro, xCirculo, yCirculo, rCirculo;

    scanf("%f %f %f", &xCirculo, &yCirculo, &rCirculo);

    scanf("%f %f %f", &xTiro, &yTiro, &rTiro);
     
    tTiro t = CriaTiro(xTiro, yTiro, rTiro);

    tCirculo c = CriaCirculo(xCirculo, yCirculo, rCirculo);

    if (TiroAcertouAlvo(t,c)){
        printf("ACERTOU");
    } else {
        printf("ERROU");
    }

    return 0;
}

tTiro CriaTiro(float xTiro, float yTiro, float rTiro){
    tTiro t;
    t.xTiro = xTiro;
    t.yTiro = yTiro;
    t.rTiro = rTiro;
    return t;
}

tCirculo CriaCirculo(float xCirculo, float yCirculo, float rCirculo){
    tCirculo c;
    c.xCirculo = xCirculo;
    c.yCirculo = yCirculo;
    c.rCirculo = rCirculo;
    return c;
}

float BuscaXdoTiro(tTiro t){
    return t.xTiro;
}

float BuscaYdoTiro(tTiro t){
    return t.yTiro;
}

float BuscaRdoTiro(tTiro t){
    return t.rTiro;
}

float BuscaXdoCirculo(tCirculo c){
    return c.xCirculo;
}

float BuscaYdoCirculo(tCirculo c){
    return c.yCirculo;
}

float BuscaRdoCirculo(tCirculo c){
    return c.rCirculo;
}

int TiroAcertouAlvo(tTiro t, tCirculo c){
    if (DistanciaTiroAlvo(t,c) <= BuscaRdoCirculo(c) + BuscaRdoTiro(t)){
        return 1;
    } else {
        return 0;
    }
}

float DistanciaTiroAlvo(tTiro t, tCirculo c){
    return sqrt(powf((BuscaYdoCirculo(c) - BuscaYdoTiro(t)), 2.0) + powf((BuscaXdoCirculo(c) + BuscaXdoTiro(t)), 2.0));
}