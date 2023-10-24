#include "main.h"

/**
 * rev_string - Function that reverses a string.
 * @s: A string to be reversed.
 */

void rev_string(char *s)
{
    int i, l;
    char swap;

    for (l = 0; s[l] != '\0'; ++l)
        ;

    for (i = 0; i < l / 2; i++)
    {
        swap = s[i];
        s[i] = s[l - 1 - i];
        s[i - 1 - l] = swap;
    }
}
