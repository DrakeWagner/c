#include <stdio.h>

int main(void) {
    int number;
    printf("Enter a number: ");
    // add test to check if it is an integer?
    
    scanf("%d", &number);
    
    if ( number%2 == 0 ) {
        printf("%d is an even number.\n", number);
    }
    else if ( number%2 != 0 ) {
        printf("%d is an odd number.\n", number);
    }
    else {
        printf("Error\n");
    }
    
    return 0;
    
}
