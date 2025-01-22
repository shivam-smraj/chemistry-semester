/*Practice Program : 02-02-2021*/
/*Q1.Write a C program to add three numbers and print the result. 
Here the three numbers have to be taken fom the user.*/

#include<stdio.h>

int main()
{
    int a , b , c ,sum = 0 ;
    printf("Enter three numbers : ");
    scanf("%d %d %d", &a , &b , &c );

    sum = a + b + c ;
    
    printf("The sum is %d\n", sum );
    
    return 0;
}