/*Decision and Branching
*C Program - Set of statements which are normally executed sequentially in the order in which they appear.
*In practice, we face a number of situations where we may change the ORDER of Execution of statements based on certain CONDITIONS or repeat a GROUP of statemnets untill certain specified condition is met.
*Involves a kind of DECISION MAKING to see whether a particular condition has occured or not and then direct the compiler to execute certain statements accordingly.
Decision making capabilities supported by C language
1.if statement                      CONTROL Statements
2.switch statement                  -controls the
3.conditional operator statement    flow of 
4.goto statement                    execution
#if statemment
    i.simple if statement
    if(test expression)
    {
        statement-block;
    }
    statement-x;

    ii.if ... else statement
    if(test expression)
    {
        True-block statement(s);
    }
    else
    {
        False-block statement(s);
    }
    Statement-x;
    iii.nested if else statement : -when a series of decisions are involved we have to use more than once if ... else statement in nexted form
    if(test condition-1)
    {
        if(test-conditio-2)
        {
            statement-1;
        }
        else
        {
            statement-2;
        }
    }
    else
    {
        statement-3;
    }
    iv.else if ladder
    if(condition-1)
        statement-1;
    else if(condition-2)
        statement-2;
        :  :  :
        :  :  :
    else if(condition-n)

#Conditional Operator
expression ? expression1 : expression2
(condition)  (if true)     (if false)
***A N Y    N O N    Z E R O    V A L U E    I S    T R U E***

Classwork on 05-02-2021
_____________________
#The switch statement|
_____________________|
~Multi-way decision statement present in C language
~Tests the value of a given variable(or expression) against a list of CASE values, and when a match is found a block of statements associated with that case is executed
    switch(expression)
    {
        case value-1(constants or constant):block-1;
                     break; 
        case value-2(constants or constant):block-2;
                     break;//signals the end of a particular case and causes an exit from the switch statement
        :   :   :   :     :
        :   :   :   :     :
        default: default-block;
                 break;
    }
    Statement x;

*/