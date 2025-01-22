/*Self Practice 31-12-2021*/
/*Q1.Write a program to input the value of days and convert it into years,weeks and days.*/

#include<stdio.h>

#define number_of_days_year 365
#define number_of_days_month 30

int main()
{
    int days;//here we will accept the number of days from user
    int d , m , yr;//variable declaration for the number of years,months ands days

    printf("Enter the number of days : \n");
    scanf("%d",&days);//accepting number of days from the user

    /* '%' is also a mathematical operator which provides 'remainder after division'*/
    
    d = m = yr = 0 ;//initialising the variables with 0 or it will be initialised by garbage values
    yr = days / number_of_days_year ;//calculating number of years
    m = ( days % number_of_days_year ) / number_of_days_month ;//calculating number of months by excluding the months included in the years
    d = ( days % number_of_days_year ) % number_of_days_month ;//calculating number of days that are not in the form of months and years

    printf("%d days is equivalent to %d years %d months %d days\n", days , yr , m , d);//while printing the sequence of variable in the output is important

    return 0;
}