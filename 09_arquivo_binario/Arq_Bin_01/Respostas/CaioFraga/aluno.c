#include <stdio.h>
#include <stdlib.h>

#include "aluno.h"

FILE *arq;

arq = fopen("dados.bin", "rb");

quantAlunos fread = (aluno, sizeof(Aluno), 3, arq);

fclose(arq);