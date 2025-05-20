/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
int sum(int n);

int main()
{
    int n;
    printf("Enter a nutural number");
    scanf("%d",&n);

    printf("The sum of first %d natural number is %d\n",n,sum(n));
    
    
   
    return 0;
}
int sum(int n){
    if(n==1)
        return 1;
        else 
    
    return n+sum(n-1);
}
    
    

