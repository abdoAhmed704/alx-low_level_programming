#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - Duplicates a string.
 * @str: The string to duplicate.
 *
 * Return: A pointer to the duplicated string, or NULL if allocation fails.
 */
char *_strdup(char *str)
{
	int index = 0;
	int str_Lne = 0;
	char *ptr;

	if (str == NULL)
		return (NULL);

	/* Calculate the length of the string */
	while (str[str_Lne])
		str_Lne++;

	ptr = (char *)malloc(str_Lne * sizeof(char));

	if (ptr == NULL)
	{
		printf("Error!!");
		return (NULL);
	}

	for (index = 0; index < str_Lne; index++)
	{
		ptr[index] = str[index];
	}

	return (ptr);
}
