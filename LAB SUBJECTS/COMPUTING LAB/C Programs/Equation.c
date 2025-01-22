/*Classwork 25-01-2021 done by Nirnay Sir*/
/*Q3.Given the values of three variables a, b and c. 
Write a program to compute the value of x, where x = a/(b-c). 
Execute your program for the values :- 
(i) a = 250, b = 85, c = 25;
(ii) a = 300, b = 30, c = 30.
Comment on the output in each case.*/
#include<stdio.h>

int main()
{
    int a = 300 , b = 70 , c = 70 ;// run-time error as division by 0
    float x = 0.0 ;

    x = (float)a/(b - c) ;//(float) is type-casting

    printf("The value of x = %f", x);
//"The value of x = 1.#INF00" is the output
    return 0;
}