/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void wrong_swap(int a, int b);
void swap(int*a,int*b);


int main()
{
    int x=8,y=7;
    printf("The value of x and y before swap is %d and %d\n",x,y);
    swap(&x,&y);
    printf("The value of x and y after swap is %d and %d\n",x,y);
   
    return 0;
}
void wrong_swap(int a, int b){
    int temp;
    a=b;
    b=temp;
}
void swap(int*a,int*b){
     int temp;
     temp=*a;
    *a=*b;
   *b=temp;
}