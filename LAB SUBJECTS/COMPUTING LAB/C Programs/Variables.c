/*Classwork 25-01-2021*/
/*Variables:
!Made of letters and digits(alphanumeric)
!Underscore(_) treated as a letter
!Both upper and lower case letters can be used but are treated as different variables-x and X are two diffrent names
!Should not begin with with underscore(_)
!Traditional C practice-lowercase for variables and uppercase for symbolic constants
!Keywords(32 in Ansi C):if,else,int,flow,etc cannot be used as variables
!*Choose variable names related to purpose of the variables*/

/*Data Types and Sizes
1.char(character):a single byte(8 bits);capable of holding one character in the local character set
2.int(integer):an integer(reflecting the natural size of the integer on the host machine);
    i.short and ii.long are applicable to integers
    short int count;\ depends on the architechture 
    long int count; / of the machine
    short-16 bits(2 bytes)
    long-32 bits(4 bytes)
#Each compiler is free to choose appropriate size for its own hardware subject to the restriction that that shorts and ints are 16 bits and longs are atleast 32 bits.
#short is no longer than int, which is no longer that long
@ signed and unsigned are applicable to both char and int
    @ unsigned number:always +ve or zero(they obey the laws of arithmetic mudulo 2^n, where n is the number of bits in the type)
        @ unsigned char variables : have values between 0 and 255
    @ signed char variables : have values between -128 and 127(in a 2's complement machine)[2^16=65536]
plain characters:
    i.signed : -128 to 127
    ii.unsigned : 0 to 255
    @these are machine dependent.
@ For 16-bit machine
-unsigned integers : values are between 0 to 65535
-signed integers : values are between -32768 to +32767
3.float : single-precision floating point; occupies 32 bits(4 bytes)
double : double point floating point; occupies 64 bits(8 bytes)
(variable to real values)[IEEE 754 floating point standard]
#long double - specifies extended-precision floating point occupies 80 bits(in a 16 bit machine)
In 16 bit machine; width of each memory location(16|16|16|16|16)
float,double,long double-represent three sizes of real numbers
*/

/*Arguments for the 'printf' functions in terms of the data types
~ %d    printing a decimal integer
~ %6d   printing a decimal which is at least 6 characters wide(number will be printed in right justified in the fields)
~ %f    printing a floating point
~ %6f   printing a floating point; at least 6 character wide
~ %.2f  printing a floating point; 2 characters after decimal point
~ %6.2f printing a floating point; 6 characters wide and 2 characters after decimal
-ex : i.printf("%3d %6d",fahrenheit,celcius);
~ %c    printing characters
~ %s    printing String(sequence of characters)
~ %o    printing octal integers
~ %x    printing hexadecimal integers
# '%' is used as a delimiter in printf function
*/

/*Q1. Write a program to add two numbers amd print the sum.*/
#include <stdio.h>
int main()
{
    float num1 = 25.75 , num2 = 75.50 , sum = 0.0;

    sum = num1 + num2;

    printf(" The sum is = %5.2f", sum);

    return 0;
}