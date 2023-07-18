#include "main.h"

/**
 * print_times_table - prints the n times table, starting with 0
 * @n: number of the times table
 */
void print_times_table(int n)
{
	if (n >= 0 && n <= 15)
	{
		for (int i = 0; i <= n; i++)
		{
			print_times_table_row(i, n);
			_putchar('\n');
		}
	}
}

void print_times_table_row(int row, int n)
{
	for (int j = 0; j <= n; j++)
	{
		int k = j * row;
		print_times_table_cell(k);
	}
}

void print_times_table_cell(int num)
{
	if (num > 99)
		_putchar(num / 100 + '0');
	else
		_putchar(' ');

	if (num > 9)
		_putchar((num / 10) % 10 + '0');
	else
		_putchar(' ');

	 _putchar(num % 10 + '0');

	if (num < 100)
		_putchar(',');
	_putchar(' ');
}
