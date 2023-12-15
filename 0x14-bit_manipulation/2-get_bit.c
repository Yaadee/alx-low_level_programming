#include "main.h"

/**
 * get_bit - Retrieve the value of a bit at a specified index.
 * @n: Number to inspect for the bit value
 * @index: Index at which to check the bit
 *
 * Returns: The value of the bit, or -1 if there's an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned long int divisor, check;

    if (index > (sizeof(unsigned long int) * 8 - 1))
        return (-1);
    divisor = 1 << index;
    check = n & divisor;
    if (check == divisor)
        return (1);
    return (0);
}

