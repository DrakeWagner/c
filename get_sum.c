#include <stdio.h>
int main()
	{
		int x, y, sum; /* def integer variables */
		printf("\nInput the first integer: ");
	    scanf("%d", &x); /* find input (decimal input) and replace variable x */
		printf("\nInput the second integer: ");
		scanf("%d", &y); /* find second input and replace variable y */
		sum = x + y;
		printf("\nThe sum is %d\n", sum);
		// printf("\nThe sum of &d", x," and &d",y," = &d",sum);
		return 0;
}	
	
