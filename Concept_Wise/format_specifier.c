// Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.
// A format specifier starts with a percentage sign %, followed by a character.

#include<stdio.h>
int main(){
    // Let's start with the int example
    int myNum = 20;
    printf("%d\n", myNum); // here the %d is format specifier which is use to for the print integer variable value.

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
    printf("My number is %d and my letter is %c", myNum, myLetter);

    return 0;


}