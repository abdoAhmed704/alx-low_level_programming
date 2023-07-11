#include "main.h"
#include <stdlib.h>
/**
 * wrdcnt - get the number of words in a string
 * @s: string to count
 *
 * Return: int
 */
int wrdcnt(char *s)
{
	int h, n = 0;

	for (h = 0; s[h]; h++)
	{
		if (s[h] == ' ')
		{
			if (s[h + 1] != ' ' && s[h + 1] != '\0')
				n++;
		}
		else if (h == 0)
			n++;
	}
	n++;
	return (n);
}

/**
 * strtow -  a function that splits a string into words.
 * @str: a string
 *
 * Return: pointer to an array of strings
 */
char **strtow(char *str)
{
	int i, j, k, l, n = 0, wc = 0;
	char **w;

	if (str == NULL || *str == '\0')
		return (NULL);
	n = wrdcnt(str);
	if (n == 1)
		return (NULL);
	w = (char **)malloc(n * sizeof(char *));
	if (w == NULL)
		return (NULL);
	w[n - 1] = NULL;
	i = 0;
	while (str[i])
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			for (j = 1; str[i + j] != ' ' && str[i + j]; j++)
				;
			j++;
			w[wc] = (char *)malloc(j * sizeof(char));
			j--;
			if (w[wc] == NULL)
			{
				for (k = 0; k < wc; k++)
					free(w[k]);
				free(w[n - 1]);
				free(w);
				return (NULL);
			}
			for (l = 0; l < j; l++)
				w[wc][l] = str[i + l];
			w[wc][l] = '\0';
			wc++;
			i += j;
		}
		else
			i++;
	}
	return (w);
}
