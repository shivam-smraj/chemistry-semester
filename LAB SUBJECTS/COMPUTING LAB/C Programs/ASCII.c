/*Classwork 29-01-2021*/
/*Q2.Write a program input an integer between 0 and 255 and print the ASCII character and perform vice versa as well.*/
#include<stdio.h>

int main()
{
    //from integer to character
    int a ;
    printf("Enter an integer between 0 and 255 : ");
    scanf("%d", &a);

    printf("The ASCII character corresponding to %d is %c \n", a, a);
    //from character to integer
    char ch;
    printf("Enter a character : ");
    scanf(" %c", &ch);//leave a whitespace then &c

    printf("The ASCII code corresponding to %c is %d \n", ch, ch);
    return 0;
}