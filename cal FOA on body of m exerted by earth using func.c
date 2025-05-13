/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
float force(float mass);


int main()
{
    float mass;
    printf("Enter mass in kg :");
    scanf("%f",&mass);
    printf("The value of force is %.2f newton",force(mass));
   

    return 0;
}
float force(float mass){
    float result;
    result=mass*9.8;
    return result;
}
