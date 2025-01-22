/*Practice Program : 02-02-2021*/
/*Q2.Write a C program for temperature conversion. Use the following formula for conversion.
                ( C / 5 )=( F - 32 ) / 9
    (a) Convert the equivalent temperature in Fahrenheit (F) to Celcius (C). 
    Where F have to be taken from the keyboard.
    (b) Convert the equivalent temperature in Celcius (C) to Fahrenheit (F).
    Where C have to be taken from the keyboard.
*/

#include<stdio.h>

int main()
{
    float c = 0.0 , f = 0.0 ;
    char ch = '\0';//'\0' --> null character in C
    
    printf("Enter 'C/c' to enter temperature in Celcius or 'F/f' to enter temperature in Fahrenheit : ");
    scanf("%c", &ch );
    
    switch(ch)
    {
        case 'F':
        case 'f':printf("Enter temperature in Fahrenheit : ");
                 scanf("%f", &f );

                 c = 5 * ( f - 32 ) / 9 ;

                 printf("Celcius equivalent of %f F is %f C\n", f , c );

                 break;

        case 'C':
        case 'c':printf("Enter temperature in Celcius : ");
                 scanf("%f", &c );

                 f = ( 9 * c / 5 ) + 32 ;

                 printf("Fahrenheit equivalent of %f C is %f F\n", c , f );
                 break;

        default : printf(" Invalid Input ");
                  break;
    }

    return 0;
}