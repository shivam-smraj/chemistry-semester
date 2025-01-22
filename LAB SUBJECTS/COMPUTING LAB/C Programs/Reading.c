/*Reading data from console
~Use scanf() function (built-in function the stdio.h library)
~The general format of scanf is as follows:
    scanf("control string",&variable,&variable2,....);
    Control String: contains the format of data being recieved(int-%d,char-%c,float-%f)
    &(ampersand):operator that specifies the variable name's address(if this operator is not used the compiler will throw errors)
    Writing the user input at a particular memory location specified by the variable.
    int(2byte/4byte) a;<--address is getting allocated in the memory and the size is given by the data type
C Tokens
    ~Keywords: have fixed meaning and they cannot be changed basic building blocks for program statement - all keywords must be
               e.g:int,char,float,double,for,while,if,break,else......
    ~Identifiers:names of the variables, functions and arrays-
                 user-defined names and consists of a sequence of letters and digits with a first character
^Rule:
    !First character must be an alphabet(or underscore)
    !Must consist of only letter letter,digit or underscore
    !Only first 31 characters are significant
    !Cannot use a keyword
    !Must not contain whitespace

-C character set:
    i.Letters[uppercase(A-Z) and lowercase(a-z)]
    ii.Digits[all decimal digits(0-9)]
    iii.Special Characters[:/;/./%/&...]
    iv.Whitespace[blank space, horizontal tab, new line,etc]
                                        Constants
                |Numerical Constant|                                    |Character Constants|
        (Integer Constants)     (Real Constants)       (Single Charset constant)    (String Constants)
User-define integer and real constants:
#define symbolic_name value_of_constant
Integer constants-refer to a sequence of digits
Integer constants:
    1.decimal integer : e.g:123 , -321 , 0 , 654321 , 78)
    [NOT ALLOWED : 15 750(space); 20,000(comma); $1000(characters)]
    2.octal integer : consists of any combination of digits from the set 0 through 7 with a leading 0
    e.g:037 , 0 ,0435 , 0551
    3.hexadecimal integer : Consists of digits preceeded by '0x' or '0X' - iclude alphabets 'A' through 'F' or 'a' through 'f'(to denote numbers 10 through 15)
    e.g:0X2 , 0X9F , 0xbcd
Real Conatants: 
    -used to represent continuous values 
    -are also called floating point constant
    -e.g:0.0083 , -0.75 , 435.36 , +237.0
    -Omit digits before or after the decimal point : 215. , .95 , -.71 , +.5
@Exponential or Scientific notation
    $Real numbers/floating point numbers may also be expressed in exponential (or scientific) notation
    $E.g:215.62 may be written as 2.1562e2 in exponential notation(e2 means multiply be 10^2)
                                            _______________________
    $                                       |Mantissa e|E exponent|
                                            |__________|__________|
    real no. expressed in decimal notation or integer       integer number with an optional plus or minus sign
    e.g: 0.65e4(10^4) , 12e^-2(10^-2) , 3.18E3(10^3) , -1.2E-1(10^-1)
    Exponential notations --- very large/very small in magnitude
    7500000000 may be written as 7.5E9
    -0.000000368 may be written as -3.68E-7
    int n <--- global variable(can be used in all the function within the program)
int m;<---global variable(can be used in all other functions within the pogram)
int main()
{
    int i;          //local variable(declared inside a function-visible amd meaning only side the functions in which they are declared)
    float balance;
    ...
    ...
    function1();
}
function1()
{
    int i;//        local
    float sum;//    variables
    ...
    ....
    .....
}

%Storage class : decide the portion of the program within which the variables are recognised
                 Used to declared explicitly the scope and lifetime of variables(important in the multi-functional and multi-file programs)
                 4 Storage class specifier
        (auto)      (static)      (extrem)   (register)
    %auto : -local variables known only to the function in which it is declared 
            -contains undefined values(known as 'garbage' values)
            -needs to be intialised explicitly.
    %static : -local variables which exists  and retains its values its values
*/
/*Q1.Write a program that reads the value of the distance travelled by the car and the time taken for the same*/
#include<stdio.h>

int main()
{
    int distance , time;
    float speed = 0.0;
    printf("Enter the distance travelled in km : ");
    scanf("%d", &distance );
    printf("Enter the time in hours : ");
    scanf("%d", &time );

    speed = (float)distance/time;

    printf("The sspeed of the car in km/hr is : %f\n", speed);
    return 0;
}