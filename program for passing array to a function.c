/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
//void printarray(int *ptr, int n){
    //for(int i=0; i<n;i++){
        //printf("The value of element %d is %d\n",i+1,*(ptr+i));
    //}
        
//}
void printarray( int ptr[],int n){
    for(int i=0;i<n;i++){
    printf("The value of element %d is %d\n",i+1,ptr[i]);
}
}

int main()
{
    int arr[]={23,455,765,355,33,56,25};
    printarray(arr,7);
      
    return 0;
}