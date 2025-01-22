/*Practice Program : 04-02-2021*/
/*Q1.Write a C program that takes an integer as input from the keyboard and display it in words. 
As for example, If the integer is 235, the output will be Two Three Five.*/

#include<stdio.h>
#include<math.h>

int main()
 {
    int no ;

    printf("Enter a number : ");
    scanf("%d", &no );

    int t = no , c = 0 , d = 0 ;

    while( t > 0 )//loop to count the number of digits
    {
        c++;
        t /= 10 ;
    }

    t = no ;
    c--;
    while( t > 0 )
    {
        d = t / ((int)powf( 10 , c )) ;
        switch(d)
        {
            case 0:printf("Zero ") ;
                   break;
            case 1:printf("One ") ;
                   break;
            case 2:printf("Two ");
                   break;
            case 3:printf("Three ");
                   break;
            case 4:printf("Four ");
                   break;
            case 5:printf("Five ");
                   break;
            case 6:printf("Six ");
                   break;
            case 7:printf("Seven ");
                   break;
            case 8:printf("Eight ");
                   break;
            case 9:printf("Nine ");
                   break;
        }
        t = t % ((int)powf( 10 , c )) ;
        c--;
    }
    printf("\n");

    return 0 ;
 }