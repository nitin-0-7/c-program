/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int mul[10];
    int n;
    printf("Enter the number you want the table of ");
    scanf("%d",&n);
    for(int i=0;i<10;i++){
        
                    mul[i]=n*(i+1);
        
        
    }
        for(int i=0;i<10;i++){
        printf("n*%d=%d\n",i+1,mul[i]);
    }


    return 0;
}