/*Practice Program : 05-02-2021*/
/*Q2.Write a program in C that takes two integer numbers (say x and y) and prints the value x and y. 
Do not use the standard library function pow() for the computation of x^y.*/

#include<stdio.h>

float power(int x , int y)
{
    if( y == 1 )
    {
        return x;
    }

    return x*power( x , y - 1 );
}
int main()
{
    printf("Enter the base and the power respectively :");
    int x , y ;
    scanf("%d %d", &x , &y );

    if( y == 0 )
    {
        printf("%d^%d = %f\n", x , y , 1.0 );
    }
    else if( y > 0 )
    {
        printf("%d^%d = %f\n", x , y , power(x , y) );
    }
    else
    {
        printf("%d^%d = %f\n", x , y , (1.0/power(x , -y)) );
    }

    return 0;
}