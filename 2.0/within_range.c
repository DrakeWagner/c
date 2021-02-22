#include <stdio.h>

// https://www.w3resource.com/c-programming-exercises/basic-algo/index.php
/* 4. Write a C program to check a given integer and 
return true if it is within 10 of 100 or 200. */


int main(){

    int num1;
    printf("Enter a number: ");
    scanf("%d", &num1);

    if(num1 >= 90 && num1 <= 110){
        printf("Within 10 of 100.\n");
    } else if(num1 >= 190 && num1 <= 210){
        printf("Within 10 of 200.\n");
    }

    return 0;
}