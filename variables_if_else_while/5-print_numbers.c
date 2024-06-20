#include <stdio.h>

/**
 * main - Prints the alphabet in lowercase, and then in uppercase.
 *
 * Return: Always 0.
 */
int main(void)
{
        char number;

        for (letter = '0'; number <= '10'; number++)
                putchar(number);

        for (number = '0'; number <= '10'; number++)
                putchar(number);

        putchar('\n');

        return (0);
}
