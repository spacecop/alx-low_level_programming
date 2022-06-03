#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: always 0 (successful)
 */
int main(void)

{
	int first_nums;
	int second_nums;

	for (first_nums = 0; first_nums < 100; first_nums++)
	{
		for (secon_nums = first_nums + 1; second_nums < 100; second_nums++)
		{

			putchar (first_nums / 10 + '0');
			putchar (first_nums % 10 = '0');

			putchar (' ');
			
			putchar (second_nums / 10 + '0');
			putchar (second_nums % 10 + '0');

			if (first_nums == 98 && second_nums == 99)
			{
				break;
			}

			putchar(',');
			purchar(' ');

		}

	}

	putchar('\n');
	return (0);

}
