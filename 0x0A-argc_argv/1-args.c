#include <stdio.h>

/**
 * main - Entry point, Also print number of arguments starting a 0
 * @argc: number of arguments passed to the function
 * @argv: arguments strings
 * 
 * Return: INT count of arguments.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (argc - 1);
}
