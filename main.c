#include "main.h"
/**
 * main - main function
 *
 * Return: 0
 */
int main(void)
{
	int n;

	n = _printf("%x\n", 0);
	printf("%d [length: %d]\n", n, 0);
	n = _printf("%x\n", 100);
	printf("%d [length: %d]\n", n, 100);
	n = _printf("%X\n", 100);
	printf("%d [length: %d]\n", n, 100);
	n = printf("%x\n", -100);
	printf("%d [length: %d]\n", n, -100);
	n = _printf("%X\n", -100);
	printf("%d [length: %d]\n", n, -100);
	n = _printf("%x\n", 500);
	printf("%d [length: %d]\n", n, 500);
	n = _printf("%X\n", 500);
	printf("%d [length: %d]\n", n, 500);
	n = _printf("%x\n", INT_MAX);
	printf("%d [length: %d]\n", n, INT_MAX);
	n = _printf("%X\n", INT_MAX);
	printf("%d [length: %d]\n", n, INT_MAX);
	n = _printf("%x\n", INT_MIN);
	printf("%d [length: %d]\n", n, INT_MIN);
	n = _printf("%X\n", INT_MIN);
	printf("%d [length: %d]\n", n, INT_MIN);
	return (0);
}
