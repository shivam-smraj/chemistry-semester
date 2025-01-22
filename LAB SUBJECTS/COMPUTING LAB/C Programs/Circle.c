/*Classwork 25-012021 done by Nirnay Sir*/
/*Q4.
(i) A point on the circumference of a circle of a circle whose center is (0,0) is (4,5).
    Write a program to compute the area and perimeter and the area of the circle.
(ii)The line joining the points (2,) and (5,6) which lie on the circumference of the circle is the diameter of the circle.
    Write a program to compute the area of the circle.(self-addition)
*/

#include<stdio.h>
#include<math.h>//includes square root function

int main()
{
    float radius = 0.0 , circumference = 0.0 , area = 0.0 ;

    int x_cord = 4;
    int y_cord = 5;

    radius = sqrt( x_cord*x_cord + y_cord*y_cord );// radius = ( (y2-y1)^2 + (x2-x1)^2 )^(0.5)

    circumference = 2 * M_PI * radius;//M_PI is the constant pi in the library math.h and cmath

    area = M_PI * radius * radius;

    printf(" The radius of the circle = %f\n", radius);
    printf(" The circumference of the circle = %f\n", circumference);
    printf(" The area of the circle = %f\n", area);

    //self-addition
    area = M_PI * ( (pow(3,2) + pow(4,2)) / 4.0);
    
    printf(" The area of the circle whose diametric points are (2,2) and (5,6) = %f\n", area);

    return 0;
}