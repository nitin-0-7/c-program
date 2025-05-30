/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int a=76;
    int *ptr=&a;
    printf("The value of ptr is %u\n",ptr);
        ptr++;
        printf("The value of ptr is %u\n",ptr);
            ptr--;
            
    printf("The value of ptr is %u\n",ptr);
    return 0;
}