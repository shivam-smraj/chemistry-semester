/*Classwork 05-02-2021 done by Nirnay Sir*/
/*Q1.Write a C program to find the GCD of two given numbers.*/

#include<stdio.h>

int main()
{
    int a , b , c , d , f ;
    printf("Enter 2 numbers to find GCD : ");
    scanf("%d %d", &a , &b );
    c = ( a > b ) ? a : b ; 
    d = ( a < b ) ? a : b ;
    while(d != 0)
    {
        f = c % d ;
        c = d ;
        d = f ;
    }
    printf("The GCD of %d and %d is %d\n", a , b , c );

    return 0;
}