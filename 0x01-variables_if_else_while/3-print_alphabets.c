#include <stdio.h>
/**
 * main - Entry point
 * Description: print lowercase then uppercase letters with putchar
 * Return: 0 if success
 */
int main(void)
{
	int n = 97;
	int u = 65;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	while (u <= 90)
	{
		putchar(u);
		u++;
	}
	putchar('\n');
	return (0);
}
