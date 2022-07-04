#include <stdio.h>
/**
 *main prints the size of various types
 *on the computer it is compiled and run on
 *Return: always 0 (successful)
 */
int main(void)
{
	printf("Size of a char: %ld byte\n", sizeof(char));
	printf("Size of an int: %ld bytes\n", sizeof(int));
	printf("Size of a long int: %ld bytes\n", sizeof(long int));
	printf("Size of a long long int: %ld bytes\n", sizeof(long long int));
	printf("Size of a float int: %ld bytes\n", sizeof(float));
	return (0);
}
