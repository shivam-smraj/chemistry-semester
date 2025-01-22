/*Practice Programs : 02-02-2021*/
/*Q3.Write C programs to evaluate the following expressions : 
(a) 4x^2 + 2x + 10
(b) 5x^3 + 4x^2y^2 + 4y^3 +30 
Here x and y may be an integer 'C'. Also print the corresponding ASCII value.
*/

#include<stdio.h>
#include<math.h>

int main()
{
    float x , y , expression;
    int ch;

    printf("Enter '1' to execute expression (a) and '2' to execute expression : ");
    scanf("%d", &ch );

    switch(ch)
    {
        case 1 : printf("Enter a value of x : ");
                 scanf("%f", &x );

                 expression = 4 * powf( x , 2 ) + 2 * x + 10 ;//float pow( float , float )

                 printf("4x^2 + 2x + 10 = %f\n", expression);
                 break;
        case 2 : printf("Enter a value of x and y respectively : ");
                 scanf("%f %f", &x , &y );

                 expression = 5 * powf( x , 3 ) + 4 * powf( x , 2 ) * powf( y , 2 ) + 4 * powf( y , 3 ) + 30 ;//float pow( float , float )

                 printf("5x^3 + 4x^2y^2 + 4y^3 +30 = %f\n", expression);
                 break;
        default : printf(" Invalid Input ");
                  break;
    }

    return 0;
}