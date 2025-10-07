#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

struct Aluno{
    char *nome;
    int matricula;
    float n1, n2, n3;
};

tAluno* CriaAluno(){
    tAluno *aluno = (tAluno*) malloc (sizeof(tAluno));
    aluno->nome = (char*) malloc (sizeof(char));
    aluno->nome = NULL;
    aluno->n1 = -1.0;
    aluno->n2 = -1.0;
    aluno->n3 = -1.0;
    aluno->matricula = -1;
    return aluno;
} 

void ApagaAluno(tAluno *aluno){
    free(aluno);
}

void LeAluno(tAluno *aluno){
    scanf("%[^\n]", aluno->nome);
    scanf("%*c");
    scanf("%d", &aluno->matricula);
    scanf("%f %f %f", &aluno->n1, &aluno->n2, &aluno->n3);
}

int ComparaMatricula(tAluno* aluno1, tAluno* aluno2){
    if(aluno1->matricula < aluno2->matricula){
        return -1;
    } else if(aluno1->matricula > aluno2->matricula){
        return 1;
    } else {
        return 0;
    }
}

int CalculaMediaAluno(tAluno* aluno){
    float media = (aluno->n1 + aluno->n2 + aluno->n3)/3;
    (int)media;
    return media;
}

int VerificaAprovacao(tAluno* aluno){
    if(CalculaMediaAluno(aluno) >= 7){
        return 1;
    } else {
        return 0;
    }
}

void ImprimeAluno(tAluno* aluno){
    printf("%s\n", aluno->nome);
}
