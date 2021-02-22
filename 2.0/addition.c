#include <stdio.h>

/* Write a C program to compute the sum of the two given 
integer values. If the two values are the same, then return 
triple their sum. Go to the editor */

int getSum(int num1, int num2){
    return num1 + num2;
};

int main(){

    int number1;
    printf("First number: \n");
    scanf("%d", &number1);
    int number2;
    printf("Second number: \n");
    scanf("%d", &number2);


    int sum = getSum(number1, number2);
    printf("The total is: ");
    printf("%d \n", sum);


    return 0;
}