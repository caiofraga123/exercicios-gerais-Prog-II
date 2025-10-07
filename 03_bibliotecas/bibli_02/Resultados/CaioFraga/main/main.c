#include <stdio.h>
#include "matrix_utils.h"

int main(){

    int rows1 = 0;
    int cols1 = 0;
    int rows2 = 0;
    int cols2 = 0;

    scanf("%d %d", &rows1, &cols1);
    scanf("%d %d", &rows2, &cols2);

    int matrix1[rows1][cols1];
    int matrix2[rows2][cols2];

    matrix_read(rows1, cols1, matrix1);
    matrix_read(rows2, cols2, matrix2);

    int num = 0;

    while (num != 6){
        printf("1 - Somar matrizes\n");
        printf("2 - Subtrair matrizes\n");
        printf("3 - Multiplicar matrizes\n");
        printf("4 - Multiplicacao de uma matriz por escalar\n");
        printf("5 - Transposta de uma matriz\n");
        printf("6 - Encerrar o programa\n");
        printf("Opcao escolhida: \n");

        scanf("%d", &num);

        if (num == 1){
            if (possible_matrix_sum(rows1, cols1, rows2, cols2)){
                matrix_add(rows1, cols1, matrix1, rows2, cols2, matrix2, matrix1);
                matrix_print(rows1, cols1, matrix1);
            }
        } else if (num == 2){
            if (possible_matrix_sub(rows1, cols1, rows2, cols2)){
                matrix_sub(rows1, cols1, matrix1, rows2, cols2, matrix2, matrix1);
                matrix_print(rows1, cols1, matrix1);
            }
        } else if (num == 3){
            if (possible_matrix_multiply(cols1, rows2)){
                matrix_multiply(rows1, cols1, matrix1, rows2, cols2, matrix2, matrix1);
                matrix_print(rows1, cols1, matrix1);
            }
        
        } else if (num == 4){
            int scalar = 0;
            scanf("%d", &scalar);
            scalar_multiply(rows1, cols1, matrix1, scalar);
            matrix_print(rows1, cols1, matrix1);
        } else if(num == 5){
            transpose_matrix(rows1, cols1, matrix1, matrix1);
            matrix_print(rows1, cols1, matrix1);
        }
    }
    
    return 0;
}