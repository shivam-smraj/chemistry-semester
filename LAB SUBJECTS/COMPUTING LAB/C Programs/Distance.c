/*Classwork 29-01-2021 Done by Nirnay Sir*/
/*Q4.Distance between any two points (x1,y1) and (x2,y2) is governed by the formula D^2 = (x2-x1)^2 + (y2-y1)^2.
Write a program to compute D given the coordinates of the points.*/
#include<stdio.h>
#include<math.h>

#define x1 5
#define y1 3
#define x2 7
#define y2 4

int main()
{
    double dist = 0.0 ;
    
    dist = sqrt((y2-y1)*(y2-y1) + (x2-x1)*(x2-x1));

    printf("The distance between two points is : %f\n", dist);

    return 0;

}