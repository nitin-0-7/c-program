/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#define MAX_ROWS 100
#define MAX_COLS 100
void displayArray(int arr[][MAX_COLS],int row, int col){
    printf("2D ARRAYS contents :\n");
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{
    int row,col;
    int arr[MAX_ROWS][MAX_COLS];
    printf("Enter the numbers of row :");
    scanf("%d",&row);
    printf("Enter the numbers of col :");
    scanf("%d",&col);
    
    printf("Enter the elements of the array:\n");
    
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            printf("Elements at position [%d][%d] ",i,j);
            scanf("%d",&arr[i][j]);
        }
    }
    
        displayArray(arr,row,col);
    

    return 0;
}