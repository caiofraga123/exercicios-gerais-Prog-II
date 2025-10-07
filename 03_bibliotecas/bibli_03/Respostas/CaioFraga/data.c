#include <stdio.h>
#include "data.h"

int verificaDataValida(int dia, int mes, int ano){
    if (mes == 2 && dia > 28){
        return 0;
    } else {
        return 1;
    }
}
