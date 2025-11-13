// Q75: Add two matrices.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
2 2
5 6
7 8
Output 1:
6 8
10 12

*/

#include <stdio.h>

void readMatrix(int r1,int r2,int c1, int c2,int arr1[r1][c1],int arr2[r2][c2]){
    printf("\nEnter elemetns for matrix 1: \n");
    for (int i =0;i<r1;i++){
        printf("Enter the elements of row %d: \n",i+1);
        for (int j=0;j<c1;j++){
            printf("A%d%d: ",i,j); scanf("%d",&arr1[i][j]);
        }
    }

    printf("\nEnter elemetns for matrix 2: \n");
    for (int i =0;i<r2;i++){
        printf("Enter the elements of row %d: \n",i+1);
        for (int j=0;j<c2;j++){
            printf("A%d%d: ",i,j); scanf("%d",&arr2[i][j]);
        }
    }
}

void displayMatrix(int r1,int r2,int c1,int c2,int arr1[r1][c1],int arr2[r2][c2]){
    printf("\nMatrix 1:\n");
    for (int i=0;i<r1;i++){
        printf("|");
        for (int j=0;j<c1;j++){
            if (j==c1-1){
                printf("%d|\n",arr1[i][j]);
            }
            else{
                printf("%d, ",arr1[i][j]);
            }
        }
    }

    printf("\nMatrix 2:\n");
    for (int i=0;i<r2;i++){
        printf("|");
        for (int j=0;j<c2;j++){
            if (j==c1-1){
                printf("%d|\n",arr2[i][j]);
            }
            else{
                printf("%d, ",arr2[i][j]);
            }
        }
    }
}

void addMatrices(int r, int c, int arr1[r][c], int arr2[r][c], int sum[r][c]){
    for (int i = 0; i < r; i++){
        for (int j = 0; j < c; j++) {
            sum[i][j] = arr1[i][j] + arr2[i][j];
        }
    }
}

void displaySum(int r,int c, int arr[r][c]){
    printf("\nSum of the two matrices:\n");
    for (int i = 0; i < r; i++) {
        printf("|");
        for (int j = 0; j < c; j++) {
            if (j==c-1){
                printf("%d|", arr[i][j]);
            }
            else{
                printf("%d ,",arr[i][j]);
            }
        }
        printf("\n");
    }
}

int main(){
    int r1,c1,r2,c2;
    printf("Enter the no. of rows of matrix 1: "); scanf("%d",&r1);
    printf("Enter the no. of columns of matrix 1: "); scanf("%d",&c1);
    printf("Enter the no. of rows of matrix 2: "); scanf("%d",&r2);
    printf("Enter the no. of columns of matrix 2: "); scanf("%d",&c2);
    
    int arr1[r1][c1];
    int arr2[r2][c2];
    int sum[r1][c1];

    readMatrix(r1,r2,c1,c2,arr1,arr2);
    displayMatrix(r1,r2,c1,c2,arr1,arr2);
    addMatrices(r1,c1,arr1,arr2,sum);
    displaySum(r1,c1,sum);

    return 0;
}