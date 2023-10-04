#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - function
 *
 * @str: a string
 *
 * Return: words
 **/
char **strtow(char *str)
{
	if (str == NULL || strcmp(str, "") == 0)
	{
		return NULL;
	}

	int i, j, k, wordCount = 0;
	int length = strlen(str);

	for (i = 0; i < length; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			wordCount++;
		}
	}

	char **words =
		(char **)malloc((wordCount + 1) * sizeof(char *));

	if (words == NULL)
	{
		return NULL;
	}

	j = 0;
	for (i = 0; i < length && j < wordCount; i++)
	{
		if (str[i] != ' ')
		{
			words[j] = (char *)malloc(MAX_WORD_LENGTH
* sizeof(char));

			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
				{
					free(words[k]);
				}
				free(words);
				return NULL;
			}

			int wordIndex = 0;
			while (i < length && str[i] != ' ')
			{
				words[j][wordIndex++] = str[i++];
			}
			words[j][wordIndex] = '\0';
			j++;
		}
	}

	words[wordCount] = NULL;

	return words;
}
