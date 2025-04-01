#include <stdio.h>

int main(){
    int matrix1[3][3], matrix2[3][3], result[3][3];

    printf("Enter the elemnts of the First Matrix:\n ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matrix1[i][j]);
        }
    }

    printf("Enter the elemnts of the Second Matrix:\n ");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            scanf("%d", &matrix2[i][j]);
        }
    }

    for(int i = 0;i < 3; i++){
        for(int j = 0;j < 3;j++){
            result[i][j] = matrix1[i][j] + matrix2[i][j];
        }
    }

    printf("The resulting matrix is: \n");
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3;j++){
            printf("%d ", result[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}