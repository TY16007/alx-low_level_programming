#include <stdio.h>
#include <time.h>
#include <stdlib.h
/**
 * main - main block
 * description: get a random number and print number
 * retunr 0
 */
int main(void)
{
	int n;
	stand(time(0));
	n= rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%i is positive\n", n);
	else if (n < 0)
		printf("%i is negative\n", n);
	else
		printf("%i is 0\n", n);
	return (0);
}
