/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void sumAndAvg(int *a,int *b,int *sum,float *avg){
     *sum=*a+*b;
     *avg=(float)*sum/2;
    
}
int main()
{
    int a,b,sum;
     float avg;
    printf("Enter the value of a :");
    scanf("%d",&a);
     printf("Enter the value of b :");
     scanf("%d",&b);
     
    sumAndAvg(&a,&b,&sum,&avg);
    
    printf("The value of sum is %d\n",sum);
    printf("The value of avg is %.2f\n",avg);
    return 0;
}