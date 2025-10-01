//This program takes two 3X3 matices and can either add them as an output.

#include<stdio.h>

int main(void){
    int A[3][3];
    int B[3][3];
    int Sum[3][3];

//Taking values for matrice A
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Enter element (row-wise) for matice A: ");
            scanf("%d",&A[i][j]);
        }
    }
//Taking values for matrice B
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Enter element (row-wise) for matice B: ");
            scanf("%d",&B[i][j]);
        }
    }
//Sums the two matrices as an output in matrice form
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            Sum[i][j] = A[i][j] + B[i][j];
        }
    }
//Prints the resultant matrice
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%4d ",Sum[i][j]);
        }printf("\n");
    }
    return 0;
}