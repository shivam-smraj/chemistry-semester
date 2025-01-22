/*Self Practice 31-01-2021*/

/*Q2.Write a program that converts a minimum and maximum temperature in Fahrenheit to Celcius using the formula : C = (F - 32) / 1.8*/
#include<stdio.h>

float converter_F_to_C(float f)//function to convert temperature in Fahrenheit to Celcius
{
    return ((f - 32) / 1.8 );//returning the temperature in Celcius by using the given formula
}

int main()
{
    float max_temp_F , min_temp_F ;
    float max_temp_C , min_temp_C ;

    printf("Enter the maximum and the minimum temperatures in Fahrenheit respectively : \n");
    scanf("%f %f",&max_temp_F , &min_temp_F);

    max_temp_C = converter_F_to_C( max_temp_F );//function call
    min_temp_C = converter_F_to_C( min_temp_F );

    printf("The maximum and the minimum temperatures in Celcius respectively are %0.2f %0.2f \n:",max_temp_C , min_temp_C);
    return 0;
}