#include <stdio.h>
/**
 *main - main finction
 *
 *Return: 0 when successful
 */

int main(void)
{
	int n = 122;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
