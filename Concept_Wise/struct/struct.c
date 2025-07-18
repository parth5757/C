#include<stdio.h>
#include<string.h>
struct myStructure {
    int myNum;
    char myLetter;
    char myString[30]; // Strings
};
struct newStructure {
    float Temprature;
};
int main(){
    struct myStructure s1;
    struct myStructure s2;

    s1.myNum = 16;
    s1.myLetter = 'A';
    // Let's know how struct work with the any string thing.
    strcpy(s1.myString, "Jay Shree Ram");

    s2.myNum = 20;
    s2.myLetter = 'B';
    
    printf("My Number %d\n", s1.myNum);
    printf("My Letter %c\n", s1.myLetter);
    // use of the string in struct function
    printf("%s\n\n",s1.myString);

    // use of multiple time with different value of struct function(It can be use anywhere as per are requirements in any code).
    printf("My Number %d\n", s2.myNum);
    printf("My Letter %c\n\n", s2.myLetter);

    // Simpler Structure syntax.
    struct myStructure s3 = {21, 'C', "Jay Shree Krishna"};

    printf("%d\n%c\n%s\n\n", s3.myNum, s3.myLetter, s3.myString);

    // Copy Sturcture
    struct myStructure s4 = {51, 'D', "Jay Hind"};
    struct myStructure s5;
    s5 =s4;
    printf("%d\n%c\n%s\n\n", s5.myNum, s5.myLetter, s5.myString);

    // miltiple struct function use
    struct newStructure s6;
    s6.Temprature = 23;
    printf("%d\n\n", s6.Temprature);
    return 0;
}


// Copy structure, multiple structure