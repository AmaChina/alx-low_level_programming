#include <stdio.h>
/**
 * main - Entry point
 * Description: print lowercase letters with putchar
 * Return: 0 if success
 */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}
