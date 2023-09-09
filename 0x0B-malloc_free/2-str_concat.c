#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Concatenates two strings.
 * @s1: The first string.
 * @s2: The second string.
 *
 * Return: A pointer to the concatenated string.
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, index1 = 0, index2 = 0;
	char *ptr;

	if (s1 == NULL)
		s1 = '\0';
	if (s2 == NULL)
		s2 = '\0';

	/* Calculate the length of the strings */
	while (s1[len1])
		len1++;
	while (s2[len2])
		len2++;

	ptr = (char *)malloc((len2 + len1) * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	/* Copy the characters from s1 to ptr */
	for (index1 = 0; index1 < len1; index1++)
		ptr[index1] = s1[index1];

	/* Copy the characters from s2 to ptr */
	for (index2 = 0; index2 < len2; index2++)
		ptr[index2 + len1] = s2[index2];

	ptr[len1 + len2] = '\0';

	return (ptr);
}

