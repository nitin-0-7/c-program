/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
      int marks[4];
      int *ptr;
      ptr=&marks[0];
      for(int i=0;i<4;i++){
          printf("Enter the marks of %d student :",i+1);
          scanf("%d",&marks[i]);
      }
        for(int i=0;i<4;i++){
          printf(" The value of marks of student %d is %d \n",i+1,marks[i]);
        }
    return 0;
}