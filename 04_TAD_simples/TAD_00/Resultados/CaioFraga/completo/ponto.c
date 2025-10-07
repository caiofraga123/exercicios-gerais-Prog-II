#include <stdio.h>
#include <math.h>
#include "ponto.h"

Ponto pto_cria (float x, float y){
    Ponto ponto;
    ponto.x = x;
    ponto.y = y;
    return ponto;
}

float pto_acessa_x (Ponto p){
    return p.x;
}

float pto_acessa_y (Ponto p){
    return p.y;
}

Ponto pto_atribui_y (Ponto p, float y){
    p.y = y;
    return p;
}

Ponto pto_atribui_x (Ponto p, float x){
    p.x = x;
    return p;
}

float pto_distancia (Ponto p1, Ponto p2){
    float dif_x = pto_acessa_x(p2) - pto_acessa_x(p1);
    float dif_y = pto_acessa_y(p2) - pto_acessa_y(p1);
    float dist = sqrt(powf(dif_x, 2.0) + powf(dif_y, 2.0));
    return dist;
}