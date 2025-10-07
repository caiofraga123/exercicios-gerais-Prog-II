#include <stdio.h>
#include "candidato.h"

int main(){

    char *nome[50], *partido[0];
    char cargo;
    int id;

    scanf("%[^,]", nome);
    scanf("%*c");
    scanf("%[^,]", partido);
    scanf("%*c");
    scanf("%[^,]", &cargo);
    scanf("%*c");
    scanf("%d", &id);

    tCandidato candidato = CriaCandidato(nome, partido, cargo, id);

    printf("%s %s %c %d", nome, partido, cargo, id);

    return 0;
}