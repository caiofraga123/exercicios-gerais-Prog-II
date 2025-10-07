#include <stdio.h>
#include "matrix_utils.h"

void matrix_read(int rows, int cols, int matrix[rows][cols]){
    int i = 0;
    while(i < rows){
        int j = 0;
        while (j < cols){
            scanf("%d", &matrix[i][j]);
            j++;
        }
        i++;
    }
}

void matrix_print(int rows, int cols, int matrix[rows][cols]){
    int i = 0;
    while(i < rows){
        int j = 0;
        while (j < cols){
            if (j == 0){
                printf("|%d ", matrix[i][j]);
            }else if (j < cols - 1){
                printf("%d ", matrix[i][j]);
            } else {
                printf("%d|\n", matrix[i][j]);
            }
            j++;
        }
        i++;
    }
}

int possible_matrix_sum(int rows1, int cols1, int rows2, int cols2){
    if (rows1 == rows2 && cols1 == cols2){
        return 1;
    }else {
        return 0;
    }
}

int possible_matrix_sub(int rows1, int cols1, int rows2, int cols2){
    if (rows1 == rows2 && cols1 == cols2){
        return 1;
    }else {
        return 0;
    }
}

int possible_matrix_multiply(int cols1, int rows2){
    if (cols1 == rows2){
        return 1;
    }else {
        return 0;
    }
}

void matrix_add(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1]){
    int i = 0;
    while (i < rows1){
        int j = 0;
        while (j < cols1){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
            j++;
        }
        i++;
    }
}

void matrix_sub(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols1]){
    int i = 0;
    while (i < rows1){
        int j = 0;
        while (j < cols1){
            result[i][j] = matrix1[i][j] - matrix2[i][j];
            j++;
        }
        i++;
    }
}

void matrix_multiply(int rows1, int cols1, int matrix1[rows1][cols1], int rows2, int cols2, int matrix2[rows2][cols2], int result[rows1][cols2]){
    int i = 0;
    int temp[rows1][cols2];
    while (i < rows1){
        int j = 0;
        while (j < cols2){
            int k = 0;
            temp[i][j] = 0;
            while (k < cols1){
                temp[i][j] += matrix1[i][k]*matrix2[k][j];
                k++;
            }
            j++;
        }
        i++;
    }

    int a = 0;
    while (a < rows1) {
        int j = 0;
        while (j < cols2) {
            result[a][j] = temp[a][j];
            j++;
        }
        a++;
    }
}

void transpose_matrix(int rows, int cols, int matrix[rows][cols], int result[cols][rows]){
    int temp[rows][cols];
    int i = 0;
    while (i < rows) {
        int j = 0;
        while (j < cols) {
            temp[j][i] = matrix[i][j];
            j++;
        }
        i++;
    }

    int a = 0;
    while (a < rows) {
        int j = 0;
        while (j < cols) {
            result[a][j] = temp[a][j];
            j++;
        }
        a++;
    }
}

void scalar_multiply(int rows, int cols, int matrix[rows][cols], int scalar){
    int i = 0;
    while (i < rows){
        int j = 0;
        while (j < cols){
            matrix[i][j] = matrix[i][j] * scalar;
            j++;
        }
        i++;
    }
}

