#include "main.h"
#include <stdlib.h>
/**
 * get_length - finding length of a string
 * @s: string
 * Return: int
 */
int get_length(char *s)
{
	int n = 0;

	for (; s[n] != '\0'; n++)
	;
	return (n);
}
/**
 * *argstostr - a function that concatenates all the
 * arguments of your program.
 *
 * @ac: int
 * @av: arguments
 *
 * Return: string
 */
char *argstostr(int ac, char **av)
{
	int n = 0, nc = 0, k = 0, cmpt = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	for (; n < ac; n++, nc++)
		nc += get_length(av[n]);
	s = malloc(sizeof(char) * nc + 1);
	if (s == 0)
		return (NULL);
	for (n = 0; n < ac; n++)
	{
		for (k = 0; av[n][k] != '\0'; k++, cmpt++)
			s[cmpt] = av[n][k];
		s[cmpt] = '\n';
		cmpt++;
	}
	s[cmpt] = '\0';
	return (s);
}
