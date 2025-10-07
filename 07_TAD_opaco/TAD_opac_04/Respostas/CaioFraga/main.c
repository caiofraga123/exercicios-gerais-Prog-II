#include <stdio.h>
#include <stdlib.h>
#include "aluno.h"

int main()
{
    tAluno *aluno = CriaAluno();

    LeAluno(aluno);

    return 0;
}