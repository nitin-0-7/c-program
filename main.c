/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include<stdlib.h>
#include<time.h>


int main()
{
    int number,guess,nguesses=1;
    srand(time(0));
    number=rand()%100+1;//Generate a random number between 1 and 100
   // printf("The Number is %d\n",number);
    //keep running the loop until the number is guessed
    do{
        printf("Guess the number between 1 to 100\n");
        scanf("%d",&guess);
        if(guess>number){
            printf("Lower number please!\n");
        }
        else if(guess<number){
            printf("Higher number please!\n");
        }
        else{
            printf("You guessed it in %d attemts\n",nguesses);
        }
        nguesses++;
    }while(guess!=number);

    return 0;
}