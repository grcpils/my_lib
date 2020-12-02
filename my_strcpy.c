/*
** EPITECH PROJECT, 2019
** my_strcpy
** File description:
** Copy string into an other string.
*/

#include <stdlib.h>
#include "my.h"

char *my_strcpy(char *dest, char const *src)
{
    int i = 0;

    for (i; src[i] != '\0'; i++)
        dest[i] = src[i];
    dest[i] = '\0';
    return (dest);
}