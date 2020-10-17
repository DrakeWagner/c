#include <stdio.h>

float fah;  /* Fahrenheit temp */
float cel;  /* Celcius temp */
char text[50];


int main() {
    printf("Input a temperature in celcius: ");
    fgets(text, text, stdin);
    sscanf(text, "%f", &cel);

    fah = ((9.0/5.0) * cel) + 32;
    printf("%f degrees Fahrenheit.\n", fah);

    return(0);
}