#include <stdio.h>

int main(){

    int matrix1[3][3], matrix2[3][3];

    printf("The First matrix is:\n ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("The Second matrix is:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    printf("The First matrix is:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrix1[i][j]);
        }
        printf("\n");
    }

    printf("The Second matrix is:\n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("%d ", matrix2[i][j]);
        }
        printf("\n");
    }

    return 0;
}