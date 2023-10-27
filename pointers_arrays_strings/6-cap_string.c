#include "main.h"
/**
 **cap_string - Function that capitalizes
 *all words of a string.
 *Return: A pointer to the new string.
 *@str: String to change
 */
char *cap_string(char *str) {
    int i;


    for (i = 0; str[i] != '\0'; i++) {
        if (str[i] == '\t' || str[i] == '\n') {
            str[i] = ' ';
        }
    }

    for (i = 0; str[i] != '\0'; i++) {
        if ((str[i] >= 'a' && str[i] <= 'z') &&
            (i == 0 || str[i - 1] == ' ' || str[i - 1] == ',' ||
             str[i - 1] == ';' || str[i - 1] == '.' || str[i - 1] == '!' ||
             str[i - 1] == '?' || str[i - 1] == '"' || str[i - 1] == '(' ||
             str[i - 1] == ')' || str[i - 1] == '{' || str[i - 1] == '}')) {
            str[i] = str[i] - 32;
        }
    }
    return str;
}

