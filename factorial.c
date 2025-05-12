/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>


    int main()
{
    int n ,factorial=1;
    printf(" enter a number :");
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    factorial*=i;
    printf("the factorial of entered number is %d",factorial);
   return 0;
}

    
