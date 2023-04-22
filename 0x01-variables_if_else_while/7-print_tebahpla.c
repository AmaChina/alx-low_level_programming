#include <stdio.h>
/**
 * main - Entry point
 * Description: print lowercase letters in reverse order.
 * Return: 0 if success
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
