/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int factorial(int x);

    int main()
{
    int a;
     printf("enter the no :");
    scanf("%d",&a);
    
    printf("The value of factorial %d is %d",a,factorial(a));
return 0;
}
int factorial(int x){
    
    printf("calling factorial %d\n",x);
    if(x==1||x==0){
        return 1;
    }
    else{
        return x*factorial(x-1);
    }
}

    
