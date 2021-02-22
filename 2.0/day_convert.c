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
    printf("Years: %.2f\n\n", years);         // round to 2 decimal places
    // printf("%d %d %f", num_days, weeks, years);


/* add up to most efficient ex: 4 years, 2 months, and 18 days... */

    printf("---- Days to years, months, and days ----\n");
    while(num_days > 0){
        int added_years; added_years = num_days/360;
        num_days -= 360*added_years;
        printf("Years: %d\n", added_years);

        int added_months; added_months = num_days/30;
        num_days -= 30*added_months;
        printf("Months: %d\n", added_months);

        printf("Days: %d\n", num_days);
        num_days -= num_days;
    }
    return 0;   
}