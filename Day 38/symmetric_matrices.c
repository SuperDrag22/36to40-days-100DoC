// Q76: Check if a matrix is symmetric.

/*
Sample Test Cases:
Input 1:
2 2
1 2
2 1
Output 1:
True

Input 2:
2 2
1 0
2 1
Output 2:
False

*/

#include <stdio.h>
#include <stdbool.h>

int main(){
    int r,c;
    printf("Enter the no. of r of matrix 1: "); scanf("%d",&r);
    printf("Enter the no. of columns of matrix 1: "); scanf("%d",&c);
    int arr[r][c];

    printf("\nEnter elements for matrix: \n");
    for (int i =0;i<r;i++){
        printf("Enter the elements of row %d: \n",i+1);
        for (int j=0;j<c;j++){
            printf("A%d%d: ",i,j); scanf("%d",&arr[i][j]);
        }
    }

    int issym=1;
    for (int i=0;i<r;i++){
        for (int j=i+1;j<c;j++){
            if (arr[i][j]!=arr[j][i]){
                issym=0;
                break;
            }
        }
        if (!issym){
            break;
        }
    }
    if (issym){
        printf("Yes this is a symmetric matrix\n");
    }
    else{
        printf("No, this is a symmetric matrix\n");
    }

    return 0;
}