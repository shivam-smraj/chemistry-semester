/*Classwork 01-02-2021 done by Nirnay Sir*/

/*Q2.Write a program to find the maximum of 2 numbers.*/

#include<stdio.h>

int main()
{
    int a , b ;

    printf("Enter two numbers : ");
    scanf("%d %d", &a , &b );

    if( a == b )
    {
        printf("Numbers are equal\n");
        return 0 ;
    } 
    if( a > b )
    {
        printf("%d is greater than %d\n", a , b );
    }
    else
    {
        printf("%d is less than %d\n", a , b );
    }
    return 0 ;
}