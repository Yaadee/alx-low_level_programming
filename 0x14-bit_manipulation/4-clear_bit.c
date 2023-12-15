#include "main.h"
#include <stdlib.h>

/**
 * clear_bit - Sets the value of a bit to 0 at a specified index.
 * @n: Pointer to the number to modify
 * @index: Index at which to clear the bit
 *
 * Return: 1 if successful, -1 if an error occurred
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index > (sizeof(unsigned long int) * 8 - 1))
        return (-1);
    
    *n &= ~(1UL << index);
    return (1);
}

