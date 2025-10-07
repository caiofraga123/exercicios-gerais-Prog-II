#include <stdio.h>
#include <string.h>
#include "candidato.h"

tCandidato CriaCandidato(char *nome, char *partido, char cargo, int id){
    tCandidato candidato;
    int tamNome = strlen(nome);
    int tamPartido = strlen(partido);

    for (int i = 0; i < tamNome; i++){
        candidato.nome[i] = nome[i];
    }

    for (int j = 0; j < tamNome; j++){
        candidato.partido[j] = partido[j];
    } 

    candidato.cargo = cargo;
    candidato.id = id;

    return candidato;
}


