#include <stdio.h>
/**
 * main - partial alphabet soup
 *
 * Return: 0
 */
int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
	{
		if (i == 'q' || i == 'e')
		{
			continue;
		}
		else
		{
			putchar(i);
		}
	}
	putchar('\n');

	return (0);
}
