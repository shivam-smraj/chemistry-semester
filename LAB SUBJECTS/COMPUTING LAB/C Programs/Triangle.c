/*Classwork 29-01-2021 Done by Sir */
/*Q3.Area of a triangle is given by the formula A = sqrt(S(S-a)(S-b)(S-c)) where a,b, and c are the sides of the triangle and 2S = (a + b + c).
Write a program to compute the area of the triangle given the value of a,b and c.
*/
#include<stdio.h>
#include<math.h>

#define a 5.5//symbolic constants
#define b 7.2
#define c 3.6

int main()
{
    float s = 0.0 , area = 0.0 ;
    s = ( a + b + c )/2;

    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("The area of triangle is : %f\n", area);
    return 0;
}