#include "main.h"

/**
 * _strcmp - compares 2 strings
 * @s1: first string
 * @s2: second string
 *
 * Return: -tve if s1<s2, +tve if s1>s2, 0 if s1==st
 */
int strcmp_fixed(const char *s1, const char *s2) {
    int i = 0; 

    
    while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0') {
        i++;
    }

    return (unsigned char)s1[i] - (unsigned char)s2[i];
}
