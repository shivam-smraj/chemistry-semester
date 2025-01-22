/*Classwork 01-02-2021 done by Nirnay Sir*/

/*Q3.Write a program to find the maximum of 3 numbers.*/

#include<stdio.h>

int main()
{
    int a , b , c ;

    printf("Enter 3 numbers : ");
    scanf("%d %d %d", &a , &b , &c );
    if( a > b )
    {
        if( a > c )
        {
            printf("%d is the largest\n", a );
        }
        else
        {
            printf("%d is the largest\n" , c );
        }
    }
    else
    {
        if( b > c )
        {
            printf("%d is the largest\n" , b );
        }
        else
        {
            printf("%d is the largest\n" , c );
        }
    }
    return 0 ;
}