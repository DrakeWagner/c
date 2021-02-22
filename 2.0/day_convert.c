#include <stdio.h>

/* 8. Write a C program to convert specified days 
into years, weeks and days. Go to the editor */

int main(){

    int num_days;
    printf("How many days? \n");
    scanf("%d", &num_days);
    printf("Days: %d\n", num_days);

    int weeks; weeks = num_days / 7;
    printf("Weeks: %d\n", weeks);

    float years; years = num_days / 360.0;  // add decimal to either side of divisor to make exact
    printf("Years: %.2f\n", years);         // round to 2 decimal places

    // printf("%d %d %f", num_days, weeks, years);

    return 0;   
}