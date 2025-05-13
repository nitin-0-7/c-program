/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
float fahrenheit(float celcius);
int main()
{
    float celcius;
    printf("Enter the celcius value ");
    scanf("%f",&celcius);
    printf("The fahrenheit value is %f",fahrenheit(celcius));
    return 0;
}
float fahrenheit(float celcius){
    float result;
    result=(celcius*1.8)+32;
    return result;
}