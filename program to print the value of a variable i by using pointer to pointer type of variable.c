/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int i=987;
   int *ptr;
   int **ptr_ptr;
   ptr=&i;
   ptr_ptr=&ptr;
   
   printf("The value of i is %d",**ptr_ptr);
    
    return 0;
}