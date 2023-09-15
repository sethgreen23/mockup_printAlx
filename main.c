#include "header.h"
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int n;
	
	n = _printf("je m'appel Seth \n");/* normal string */
	printf("Length [%d], strlen [%lu]\n", n, strlen("je m'appel Seth \n"));
	n = _printf("hello wold\n");/* normal string */
	printf("Length [%d], strlen [%lu]\n", n, strlen("hello wold\n"));
	n = _printf("the beauty is great\n");/* normal string */
	printf("Length [%d], strlen [%lu]\n", n, strlen("the beauty is great\n"));
	n = _printf("the beauty is %c great %c %c \n", 'h', 'T', 'F');/* %c */
	printf("Length [%d], strlen [%lu]\n", n, strlen("the beauty is h great T F \n"));
	printf("hello [length = %d]\n",_strlen("hello"));	
	n = _printf("the beauty of %s %s madness\n", "the", "world is");/* %s */
	printf("Length [%d], strlen[%lu]\n", n, strlen("the beauty of the world is madness\n"));
        n = _printf("%d\n", INT_MAX);/* %d */
	printf("Length [%d]\n", n);
	n = _printf("%d\n", INT_MIN);/* %d */
	printf("Length [%d]\n", n);
	n = printf("%d\n", 012);/* %d */
	printf("Length [%d]\n", n);
	n = printf("%d\n", 0x12);/* %d */
	printf("Length [%d]\n", n);
	n = printf("%i\n", 012);/* %i */
	printf("Length [%d]\n", n);
	n = printf("%i\n", 0x12);/* %i */
	printf("Length [%d]\n", n);
	return (0);
}
