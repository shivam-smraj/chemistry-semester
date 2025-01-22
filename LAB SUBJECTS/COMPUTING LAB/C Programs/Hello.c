/*Classwork 22-01-2021 done by Nirnay Sir*/
/*
Documentation:
//<--single line comment
/*  <-- multi line comment */

/*
-main() is the most important function and compiler looks for main to start compilation.
-It is a special function from which program execution begins.
-Every program must have a main() function or the compiler will throw error.
-Function 
    !takes arguments(parameters the function will work on)
    !return type(void means no return type); main() can be written as int main() in that case we have to write return 0 at the last of main()
    return statement must be the last line of the function
    void main() or main(void) or void main(void) all are acceptable.
*/
/*Definition Section:
#define all symbolic constants

GLOBAL Declaration Section:
#includes varibles used in different functions
#variables used in more than one function
#This section defines global variables and prototypes of user-defined functions
#main()
{<--program execution starts
    __________________
    |Declaration Part|
    |________________|

    _________________
    |Executable Part|-->at least one statement should be present
    |_______________|
}<--program execution ends
__________________________________________________________________
Sub-program Section
(User defined functions and these are called in the main function)
_________________________________________________
|              Function 1                       |
|              Function 2                       |
|                   !                           |        
|                   !                           |
|                   !                           |        
|______________Function n_______________________|
*All sections except the main function and link section may be absent when not required.
*/
#include<stdio.h>
//command to tell the compiler to include standard input/output library
int main()//() indicates function, within brackets() arguments are taken
{//start of main()

    printf("H e l l o     ,    W o r l d\n");//library function to print the arguments passed(sequence of characters)
    //printf() is called from main block
    //'\n' is a character constant and it represents new line characters
    return 0;
}//end of main()