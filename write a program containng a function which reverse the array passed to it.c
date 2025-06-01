/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
void reverse(int *arr, int n){
    int temp;
    for (int i=0;i<(n/2);i++){
    temp=arr[i];
    arr[i]=arr[n-i-1];
    arr[n-i-1]=temp;
    }
}

int main()
{
    int arr[]={1,2,3,4,5,6,7};
    reverse (arr,7);
    for(int i=0;i<7;i++){
        printf("The value of %d element is: %d \n",i,arr[i]);
    }

    return 0;
}