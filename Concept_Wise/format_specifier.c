// Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.
// A format specifier starts with a percentage sign %, followed by a character.

#include<stdio.h>
int main(){
    // Let's start with the int example
    int myNum = 20;
    printf("%d\n", myNum); // here the %d is format specifier which is use to for the print integer variable value(It also call signed Int).

    // Now let's go for the float value print
    float Temprature = 21.4;
    printf("%f\n", Temprature); // here the %f is for print float variable value.

    // Next is character value print
    char myLetter = 'A';
    printf("%c\n", myLetter);

    // Now we do for string value
    char str[] = "Jay Shree Ram\n";
    printf("%s", str);
    // Add diffferet variable values in any statment.
    printf("My number is %d and my letter is %c \n", myNum, myLetter);

    // Double value data type.
    double doubleVal = 12345.6789;
    // here the %lf is use for the print any double data type value printing. and if we want to print specific length number of value after point then we can add needed number in between % and lf with Syntax: %.3lf(here 3 is needed number it print only 3 length point after value.).
    printf("Double: %.4lf, %lf\n", doubleVal, doubleVal);

    // Unsigned Integer
    unsigned int uIntVal = 4294961295;
    // unsigned integer data format to reprsent is %u. and It use when we do not want to use the negative value.
    printf("Unsigned Integer: %u \n", uIntVal);

    // Short Integer value.
    short shortVal = -32768;
    printf("Short Integer value is: %hd \n", shortVal); // short integer value represent by %hd format. It range between –32,768 to 32,767. more negative use default int value.

    return 0;
}