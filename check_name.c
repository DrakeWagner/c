#include <stdio.h>
#include <assert.h>
int main() {
	char name[20];
        
	
	printf("\nPlease enter your name: ");
  fgets(name, 20, stdin);
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
