#include "main.h"

/**
 * _square calculates 
 * base: base of the exponent
 * pow: power of the exponent
 *
 * Return: get the value
 */
unsigned long int _square(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int a;

	num = 1;
	for (a = 1; a <= pow; a++)
		num *= base;
	return (num);
}

/**
 * print_binary - prints a number in binary notation
 * @n: number to print
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int divisor, check;
	char flag;

	flag = 0;
	divisor = _square (2, sizeof(unsigned long int) * 8 - 1);
	while (divisor != 0)
	{
		check = n & divisor;
		if (check == divisor)
		{
			flag = 1;
			_putchar('1');
		}
		else if (flag == 1 || divisor == 1)
		{
			_putchar('0');
		}
		divisor >>= 1;
	}
}

