// Q72: Find the sum of all elements in a matrix.

/*
Sample Test Cases:
Input 1:
2 3
1 2 3
4 5 6
Output 1:
21

*/

#include <stdio.h>

void readMatrix(int r,int c,int arr[r][c]){
    printf("\nEnter elements for Matrix: \n");
    for (int i=0;i<r;i++){
        printf("\nEnter elements of row %d: \n",i+1);
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
                printf("%d,",arr[i][j]);
            }
            }
            printf("\n");
        }
    }

void sumElementOfMatrix(int r,int c,int arr[r][c]){
    int sum=0;
    for (int i=0;i<r;i++){
        for (int j=0;j<c;j++){
            sum += arr[i][j];
        }
    }
    printf("\nThe sum of the elements is: %d",sum);
}

int main(){
    int r,c;

    printf("Enter the number of rows: "); scanf("%d",&r);
    printf("Enter the number of columns: "); scanf("%d",&c);

    int arr[r][c];
    readMatrix(r,c,arr);
    displayMatrix(r,c,arr);
    sumElementOfMatrix(r,c,arr);

    return 0;
}