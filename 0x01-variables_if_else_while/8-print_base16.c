#include <stdio.h>
/**
 * main - Entry point
 * Descriptiion: prints all the numbers of base sixteen.
 * Return: 0 if success
 */
int main(void)
{
	int n;
	int l;

	for (n = 48; n <= 57; n++)
	{
		putchar(n);
	}
	for (l = 97; l <= 102; l++)
	{
		putchar(l);
	}
	putchar('\n');
	return (0);
}
