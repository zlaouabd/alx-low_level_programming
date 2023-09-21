#include "main.h"

/**
 * wildcmp - compares two strings, allowing the use of wildcard '*' and '?'
 * @s1: the first string
 * @s2: the second string
 *
 * Return: 1 if the strings can be considered identical, otherwise 0
 */
int wildcmp(char *s1, char *s2)
{
if (*s2 == '*')
{
if (*(s2 + 1) == '*')
return (wildcmp(s1, s2 + 1));
else if (wildcmp(s1, s2 + 1))
return (1);
return (wildcmp(s1 + 1, s2));
}
if (*s1 == *s2 || (*s2 == '?' && *s1 != '\0'))
{
if (*s1 == '\0')
return (1);
return (wildcmp(s1 + 1, s2 + 1));
}
return (0);
}
