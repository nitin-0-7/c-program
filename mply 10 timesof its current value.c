/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void MultiplyByTen(int *num){
    *num=*num*10;
}
int main()
{
    int value;
    printf("Enter the Integer value");
    scanf("%d",&value);
    MultiplyByTen(&value);
    printf("The value after multiplying by 10 is %d\n",value);
    return 0;
}