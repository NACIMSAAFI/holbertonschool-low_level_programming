#include "main.h"

/**
 * _strspn - calculates the length of a prefix substring that only contains
 * characters found in the accept string.
 * @s: The string to be searched.
 * @accept: The string containing characters to search for.
 *
 * Return: The number of bytes in the initial segment of s which consist
 * only of bytes from accept.
 */
unsigned int _strspn(char *s, char *accept)
{
    unsigned int i, j;
    unsigned int n = 0;

    for (i = 0; s[i] != '\0'; i++)
    {
        for (j = 0; accept[j] != '\0'; j++)
        {
            if (s[i] == accept[j])
            {
                n++;
                break; 
            }
        }

        if (accept[j] == '\0')
        {
            break;
        }
    }

    return n;
}
