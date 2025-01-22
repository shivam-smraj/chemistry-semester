/*Practice Programs : 03-01-2021*/
/*Q1.Write a C program to find the sum of individual digits of a positive integer. 
The number has to be taken as input from the keyboard. 
The maximum number of digits in the number may be four.*/

#include<stdio.h>

int main()
{
    int no ;
    printf("Enter a number less than 10000 : ");
    scanf("%d", &no );

    if( no < 10000 )
    {
        int d = 0 , sum = 0 ;
        while( no > 0 )
        {
            d = no % 10 ;
            sum += d ;
            no /= 10 ;
        }
        printf("Sum of digits : %d\n", sum );
    }
    else
    {
        printf("Invalid Input\n");
    }

    return 0;
}