#include <stdio.h>

int main() {
    int matrix1[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    int matrix2[2][3] = {
        {11,22,33},
        {44,55,66}
    };

    int len_row = sizeof(matrix1)/sizeof(matrix1[0]);
    printf("length of row: %d\n", len_row);

    int len_col = sizeof(matrix1[0])/sizeof(matrix1[0][0]);
    printf("length of column : %d\n", len_col);

    printf("Mtarix1 : \n");
    for(int row = 0; row<len_row; row++){
        for(int col = 0; col<len_col; col++){
            printf("%d ", matrix1[row][col]);
        }
        printf("\n");
    }
    printf("Mtarix2 : \n");
    for(int row = 0; row<len_row; row++){
        for(int col = 0; col<len_col; col++){
            printf("%d ", matrix2[row][col]);
        }
        printf("\n");
    }
    printf("Mtarix1 + Mtarix2 = matrix3: \n");
    for(int row = 0; row<len_row; row++){
        for(int col = 0; col<len_col; col++){
            printf("%d ", matrix1[row][col] + matrix2[row][col]);
        }
        printf("\n");
    }
    return 0;
}


// matrix multiplication
#include <stdio.h>

int main() {
    int matrix1[2][3] = {
        {1,2,3},
        {4,5,6}
    };
    int matrix2[2][3] = {
        {11,22,33},
        {44,55,66}
    };
    int len_row = sizeof(matrix1)/sizeof(matrix1[0]);
    printf("length of row: %d\n", len_row);
    int len_col = sizeof(matrix1[0])/sizeof(matrix1[0][0]);
    printf("length of column : %d\n", len_col);
    printf("Mtarix1 : \n");
    for(int row = 0; row<len_row; row++){
        for(int col = 0; col<len_col; col++){
            printf("%d ", matrix1[row][col]);
        }
        printf("\n");
    }
    printf("Mtarix2 : \n");
    for(int row = 0; row<len_row; row++){
        for(int col = 0; col<len_col; col++){
            printf("%d ", matrix2[row][col]);
        }
        printf("\n");
    }
    printf("Mtarix1 * Mtarix2 = matrix3: \n");
    for(int row = 0; row<len_row; row++){
        for(int col = 0; col<len_col; col++){
            printf("%d ", matrix1[row][col] * matrix2[row][col]);
        }
        printf("\n");
    }
    return 0;
}