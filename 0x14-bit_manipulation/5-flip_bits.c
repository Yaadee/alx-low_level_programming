#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to change
 *             from one number to another.
 * @n: First number
 * @m: Second number
 *
 * Return: Number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
    int bitIndex, countBits = 0;
    unsigned long int diff;
    unsigned long int exclusiveOr = n ^ m;

    for (bitIndex = 63; bitIndex >= 0; bitIndex--)
    {
        diff = exclusiveOr >> bitIndex;
        if (diff & 1)
            countBits++;
    }

    return (countBits);
}

