#include "main.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * *str_concat - concatenates two strings
 * @s1: string 1
 * @s2: string 2
 * Return: pointer to newly allocated space
*/

char *str_concat(char *s1, char *s2)
{
	int size1 = 0;
	int size2 = 0;
	int i;
	char *m;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (i = 0; s1[i] != '\0'; i++)
		size1++;
	for (i = 0; s2[i] != '\0'; i++)
		size2++;

	m = malloc(sizeof(char) * (size1 + size2) + 1);

	if (m == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		m[i] = s1[i];
	for (i = 0; s2[i] != '\0'; i++)
		m[size1 + i] = s2[i];

	return (m);
}
