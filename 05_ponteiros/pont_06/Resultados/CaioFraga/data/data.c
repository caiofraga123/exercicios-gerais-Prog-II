#include <stdio.h>
#include <stdlib.h>
#include "data.h"

void InicializaDataParam( int dia, int mes, int ano, tData *data){
    data->dia = &dia;
    data->mes = &mes;
    data->ano = &ano;
}

void LeData( tData *data ){
    int dia, mes, ano;
    scanf("%d %d %d", &dia, &mes, &ano);
    InicializaDataParam(dia, mes, ano, &data);
}

void ImprimeData( tData *data ){
    printf("'%d/%d/%d'\n");
}

int EhBissexto( tData *data ){
    if ((data->ano % 4 == 0 && data->ano % 100 != 0) || (data->ano % 400 == 0)) {
        return 1;
    } else {
        return 0;
    }
}

int InformaQtdDiasNoMes( tData *data ){
    if(data->mes == 1 || data->mes == 3 || data->mes == 5 || data->mes == 7 || data->mes == 8 || data->mes == 10 || data->mes == 12){
        return 31;
    } if (data->mes == 4 || data->mes == 6 || data->mes == 9 || data->mes == 11){
        return 30;
    } if (data->mes == 2){
        if (EhBissexto(&data)){
            return 28;
        } else {
            return 27;
        }
    }
}

void AvancaParaDiaSeguinte( tData *data ){
    if (data->dia)
    data->dia = data->dia++;
}
