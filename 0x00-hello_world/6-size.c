#include <stdio.h>

/**
*main -entry point
*Return: Always 0 (success)
*/
int main(void)
{
	int i;
	long int l;
	long long int ll;
	float d;
	char c;

	printf("Size of a char: %lu byte(s)\n", sizeof(c));
	pintf("Size of an int: %lu byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu byte(s)\n", sizeof(l));
	printf("Size of a long long int: %lu byte(s)\n", sizeof(ll));
	printf("Size of a float: %lu byte(s)\n", size0f(d));
	return (0);
}
