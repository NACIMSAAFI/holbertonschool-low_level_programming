#include "main.h"
/**
 * flip_bits - Counts the number of bits needed to convert one number to another.
 * @n: The first unsigned long int number.
 * @m: The second unsigned long int number.
 *
 * Return: The number of bits to flip to convert n to m.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}

/**
 * countSetBits - Counts the number of set (1) bits in an integer.
 * @n: The integer to count set bits in.
 *
 * Return: The count of set bits in the given integer.
 */
int countSetBits(int n)
{
	int count = 0;
	while (n > 0)
	{
		count++;
		n &= (n - 1);
	}
	return (count);
}
