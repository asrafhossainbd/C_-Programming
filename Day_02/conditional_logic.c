#include <stdio.h>
int main()
{
    /*
    int n;

    n = 10;

    if(n >= 0){
        printf("The number is positive\n");
    }
    else{
        printf("The number is negative\n");
    }
    */
    /*
    int n;

    n = 10;

    if(n < 0){
        printf("The number is negetive\n");
    }
    else{
        printf("The number is positive\n");
    }
    */
   /*
    int n = 10;

    if(n < 0){
        printf("The number is negative\n");
    }
    else if (n > 0)
    {
        printf("The number is positive\n");
    }
    else{
        printf("The number is zero\n");
    }
    */

    //Experiment 
    /*
    int n = 10;
    if(n < 30){
        printf("n is less the 30.\n");
    }
    else if(n < 50){
        printf("n is less the 50.\n");
    }
    */

    // How to find out even or odd number

    int number;

    printf("Enter a number: ");

    scanf("%d", &number);

    if(number % 2 <= 0 ){
        printf("%d is even number.", number);
    }else{
        printf("%d is odd number.", number);
    }

    return 0;
}