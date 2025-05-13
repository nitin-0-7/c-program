/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int fibonacci (int n);
int main(){
    int n;
    printf("Enter the number :");
    scanf("%d",&n);
    printf("Fibonacci series up to %d terms:\n", n);
    
    for(int i=0;i<n;i++ )
    printf("Fibonacci series up to n %d\n",fibonacci(i));
    
    
    return 0;
}
int fibonacci (int n){
    if (n==0)
        return 0;
    
    else if (n==1)
        return 1;
    
    else
    return fibonacci(n-1)+fibonacci(n-2);
}

    