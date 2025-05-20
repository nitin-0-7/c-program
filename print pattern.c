/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void printpattern(int n);
int main()
{
    int n;
    printf("Enter the number of lines");
    scanf("%d",&n);
    printpattern(n);
    
    

    return 0;
}
void printpattern(int n){
    if(n==1){
        printf("*\n");
        return;
    }
    printpattern(n-1);
    for(int i=0;i<(2*n-1);i++){
    printf("*");
    }
    printf("\n");
   
}