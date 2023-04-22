#include <stdio.h>
/**
 * main - Entry point
 * Description: print single digit numbers in base 10 with putchar.
 * Return: 0 if success
 */
int main(void)
{
	int n;

	for (n = 0; n <= 9; n++)
	{
		putchar(n + 48);
	}
	putchar('\n');
	return (0);
}
