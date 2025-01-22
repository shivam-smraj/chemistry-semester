/*Practice Program : 02-01-2021*/
/*Q3.Write a program that takes as input a single character from the user.
If the character is an English alphabet in small case, it is converted to upper case and printed out. 
If the character is an English alphabet in upper case, it is converted to lower case and printed out. 
If the character is not an English alphabet, then it is kept unchanged and printed out.
*/

#include<stdio.h>

int main()
{
    char ch ;
    int a1 = 'a' , z1 = 'z' , a2 = 'A' , z2 = 'Z' ;

    printf("Enter a character : ");
    scanf("%c" , &ch );

    if( (ch >= a1) && (ch <= z1) )
    {
        ch = (char)(ch - (a1 - a2));
    }
    else if( (ch >= a2) && (ch <= z2) )
    {
        ch = (char)( ch + (a1 - a2) );
    }
    else{}

    printf("The changed character is : %c", ch );

    return 0;
}