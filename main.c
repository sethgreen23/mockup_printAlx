#include "header.h"
/**
 * main - main function
 *
 * Return: nothing
 */
int main(void)
{
	int n;
	
	n = _printf("je m'appel Seth \n");
	printf("Length [%d], strlen [%lu]\n", n, strlen("je m'appel Seth \n"));
	n = _printf("hello wold\n");
	printf("Length [%d], strlen [%lu]\n", n, strlen("hello wold\n"));
	n = _printf("the beauty is great\n");
	printf("Length [%d], strlen [%lu]\n", n, strlen("the beauty is great\n"));
	n = _printf("the beauty is %c great %c %c \n", 'h', 'T', 'F');
	printf("Length [%d], strlen [%lu]\n", n, strlen("the beauty is h great T F \n"));
	printf("hello [length = %d]\n",_strlen("hello"));	
	n = _printf("the beauty of %s %s madness\n", "the", "world is");
	printf("Length [%d], strlen[%lu]\n", n, strlen("the beauty of the world is madness\n"));
        n = _printf("%d\n", INT_MAX);
	printf("Length [%d]\n", n);
	n = _printf("%d\n", INT_MIN);
	printf("Length [%d]\n", n);
	return (0);
}
