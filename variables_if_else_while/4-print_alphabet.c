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
			break;
		}
		else
		{
			putchar(i);
		}
	}
	putchar(i);

	return (0);
}
