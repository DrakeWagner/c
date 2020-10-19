#include <stdio.h>

int main() {
    int number;
    
    printf("Enter the best reggae-rock band that is not Sublime: ");
    scanf("%d", &number);
    
    if ( number == 311 ) {
        printf("You entered %d.\n", number);
        printf("That is correct!\n");
    }
    
    return 0;
    
}
