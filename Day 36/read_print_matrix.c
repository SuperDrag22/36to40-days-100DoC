// Q71: Read and print a matrix.

/*
Sample Test Cases:
Input 1:
2 2
1 2
3 4
Output 1:
1 2
3 4

*/

#include <stdio.h>

void readMatrix(int r,int c,int arr[r][c]){
    printf("\nEnter elements for matrix: \n");
    for (int i=0;i<r;i++){
        printf("Enter elements of row %d: \n",i+1);
        for (int j=0;j<c;j++){
            printf("A%d%d: ",i,j); scanf("%d",&arr[i][j]);
        }
    }
}

void displayMatrix(int r,int c,int arr[r][c]){
    printf("\nMatrix:\n\n");
    for (int i=0;i<r;i++){
        printf("|");
        for (int j=0;j<c;j++){
            if (j==c-1){
                printf("%d|",arr[i][j]);
            }
            else{
                printf("%d, ",arr[i][j]);
            }
        }
        printf("\n");
    }
}

int main(){
    int r,c;
    printf("Enter the no. of rows: "); scanf("%d",&r);
    printf("Enter the no. of columns: "); scanf("%d",&c);
    
    int arr[r][c];

    readMatrix(r,c,arr);
    displayMatrix(r,c,arr);    
}