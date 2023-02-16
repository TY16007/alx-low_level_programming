#include <stdio.h>
/**
 * main -Entry point
 * Return: Always 0 (Success)
 */
int main(void)
{
	printf("Sizee of a char: %zu byte(s)\n", sizeof(char));
	printf("Sizee of a int: %zu byte(s)\n", sizeof(int));
	printf("Sizee of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Sizee of a float: %zu byte(s)\n", sizeof(float));
	return (0);
}
