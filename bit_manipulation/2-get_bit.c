#include "main.h"

/**
 * get_bit - Gets the value of a bit at a given index.
 * @n: The number to extract the bit from.
 * @index: The index of the bit to get.
 *
 * Return: The value of the bit at the specified index,
 * or -1 if an error occurs.
 */
int get_bit(unsigned long int n, unsigned int index)
{
    unsigned int len = 0; 
    unsigned int i;

    while ((n >> len) > 0)
        len++;

    if (index >= len)
        return (-1);

    for (i = 0; i < len; i++)
    {
        if (i == index)
            return ((n >> i) & 1); 
    }

    return (-1); 
}
