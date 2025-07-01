#include<stdio.h>
void main_2();
int main_1(){
    printf("Jay Shree Krishna.\n\n");
    printf("Jay Shree Ram.\n");
    // main_1();
    return 0;
}

// printf statement important escape sequence
// \
// \t is for tab
// \\ for adding backslash(\)
//  \"  insert double quotes
//  // for any where comment in c

// use of %d
int main(){
    main_1();
    int quantity = 10;
    int price = 20;
    printf("Price of %d notebook is %d \n", quantity, quantity * price); // if you not print 
    main_2();
    return 0;
    // main2();
}


// Exercise for basic printf and scanf
// Enter your name: Parth
// Enter your age: 21
// My name is Parth and I am 21 years old.

// #include<stdio.h> // header file. // standard input output file
void main_2(){       // main function(entry point)
    char name;   // string variable declaration
    int age;     // integer variable declaration
    printf("Enter your name: ");  
    scanf(&name);
    printf("your name is %s", name);
}