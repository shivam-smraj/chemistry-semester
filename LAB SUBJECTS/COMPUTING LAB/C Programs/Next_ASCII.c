/*Practice Program : 02-02-2021*/
/*
Q4.Write a program that prints the next character from the ASCII table for the corresponding character taken from the keyboard. 
As for example if the character taken from the keyboard is ‘B’ the program will print the immediate next character ‘C’. 
Also print the corresponding ASCII value.
*/

#include<stdio.h>

int main()
{
    char c = '\0' ;

    printf("Enter a character : ");
    scanf("%c", &c );

    char nc = (char)( c + 1 );
    int nc1 = (int)( c + 1 );

    printf("The required character and integer : %c and %d", nc , nc1 );
    return 0;
}