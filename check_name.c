#include <stdio.h>
int main(void) {
	char name[20];
        fgets(name, 20, stdin);
	char conf[1];
	
	printf("\nPlease enter your name: ");
	scanf("%s", &name);
	printf("%s entered.\n", name);
	//printf("\nYour name is %s, correct?\n", name);
	//printf("Y or N\n");
	//scanf("%s", conf);
    if ( name == "Drake" ) {
      printf ("Access granted!\n");
    }
    //else if ( name != "Drake" ) {
      //	printf("Access denied.\n");
    //}
    else
    {
      printf("Access denied LOL haha\n");
    }
	return 0;
}	
