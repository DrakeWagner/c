#include <stdio.h>
#include <assert.h>

int main() {
    int age;
    printf("Enter your age:");
    scanf("%d",&age);
    if(age >= 21) {
	printf("You may gamble in Virginia");
    } else {
        printf("You are too young to gamble!\n");
    }
    return 0;
}
