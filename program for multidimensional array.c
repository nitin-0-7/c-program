/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int n_student=3;
    int n_subjects=5;
    int marks[3][5];
    for(int i=0; i<n_student;i++){
        for(int j=0;j<n_subjects;j++){
            printf("Enter the marks of student %d in subject %d\n",i+1,j+1);
            scanf("%d",&marks[i][j]);
        }    
    }
            for(int i=0; i<n_student;i++){
        for(int j=0;j<n_subjects;j++){
            printf("The marks of student  %d in subject %d is %d:\n",i+1,j+1,marks[i][j]);
            
        }    
    }
            
    return 0;
}