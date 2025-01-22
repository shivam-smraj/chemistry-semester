/*Practice Programs : 03-01-2021*/
/*Q2.Write a program that takes as input a single character from the user and check whether the entered character is a vowel or consonant.*/

#include<stdio.h>

int main()
{
    char ch ;

    printf("Enter an alphabet : ");
    scanf("%c", &ch );

    switch( ch )
    {
        case 'A':
        case 'a':
        case 'e':
        case 'E':
        case 'i':
        case 'I':
        case 'O':
        case 'o':
        case 'U':
        case 'u':printf("%c is vowel.", ch );
                 break;
        default:printf("%c is constant.", ch );
    }

    return 0 ;
}