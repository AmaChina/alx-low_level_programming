#include <stdio.h>
#include <stdlib.h>
/**
 * main - print min no. coins to make change
 * @argv: argument vector
 * @argc: argument count
 * Return: 1 if arguments passed not exactly 1 otherwise 0
 */

int main(int argc, char *argv[])
{
	int cent, s = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cent = atoi(argv[1]);

	while (cent > 0)
	{
		s++;
		if ((cent - 25) >= 0)
		{
			cent -= 25;
			continue;
		}
		if ((cent - 10) >= 0)
		{
			cent -= 10;
			continue;
		}
		if ((cent - 5) >= 0)
		{
			cent -= 5;
			continue;
		}
		if ((cent - 2) >= 0)
		{
			cent -= 2;
			continue;
		}
		cent--;
	}
	printf("%d\n", s);
	return (0);
}
