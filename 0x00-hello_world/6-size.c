#include <stdio.h>
/**
 * main prints the size of various types
 * Produce the exact same output as in the example
 * Warnings are allowed
 * Return: always 0 (successful)
 */
int main(void)
{
	printf("Size of a char: %lu byte(s)\n",
	      	(unsigned long)sizeof(char));
	printf("Size of an int: %lu byte(s)\n",
	      	(unsigned long) sizeof(int));
	printf("Size of a long int: %lu byte(s)\n",
	    	(unsigned long) sizeof(long int));
	printf("Size of a long long int: %lu byte(s)\n",
		(unsigned long) sizeof(long long int));
	printf("Size of a float int: %lu byte(s)\n",
		(unsigned long) sizeof(float));
	return (0);
}
