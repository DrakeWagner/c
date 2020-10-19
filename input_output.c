#include <stdio.h>

// input and outpuut examples

int main() {
    int testInteger;
    printf("Enter an integer:  ");
    scanf("%d", &testInteger);
    printf("Number = %d\n", testInteger);

    float testFloat;
    printf("Enter a decimal-digit: ");
    scanf("%f", &testFloat);
    printf("Float = %f\n", testFloat);

    // return ASCII value
    char asciichar;
    printf("Enter a character to see it's ASCII value: ");
    scanf("%c", &asciichar);
    //printf("The ASCII value for %c is %d.\n", chr, chr);
    printf("The ASCII value is %d\n", asciichar);

    // int and float
    int a;
    float b;

    printf("Enter an integer and a float:  ");
    scanf("%d%f", &a, &b);
    printf("You entered %d and %f.\n", a, b);


    return 0;

}
