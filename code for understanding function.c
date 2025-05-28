/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include <stdio.h>
void sumAndavg(int a, int b,int *sum,float *avg){
    *sum=a+b;
    *avg=(float)(*sum)/2;
    
}

int main()
{
   int i,j,sum;
   float avg;
   i=8;
   j=9;
   sumAndavg(i,j,&sum,&avg);
   printf("The value of sum is %d\n",sum);
   printf("The value of avg is %f\n",avg);
   int t,u,sum2;
   float avg2;
   t=45;
   u=61;
   sumAndavg(t,u,&sum2,&avg2);
   printf("The value of sum is %d\n",sum2);
   printf("The value of avg is %f\n",avg2);
   
    return 0;
}