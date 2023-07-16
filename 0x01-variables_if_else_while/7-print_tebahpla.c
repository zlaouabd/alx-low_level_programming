#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (success).
 */
int main(void)
{
int letter;
for (letter = 122; letter >= 97; letter--)
{
putchar(letter);
}
putchar('\n');
return (0);
}
