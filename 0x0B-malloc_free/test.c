#include <stdio.h>
#include <stdlib.h>

char *argstostr(int ac, char **av)
{
    unsigned int i;
    char *ptr;
    
    ptr = (char *)malloc((ac - 1) * sizeof(char));
    
    for(i = 0; i < ac; i++)
        ptr[i] = *av[i];	
    return (ptr);
}

/**
 * main - check the code for ALX School students.
 *
 * Return: Always 0.
 */
int main(int ac, char *av[])
{
    char *s;

    s = argstostr(ac, av);
    if (s == NULL)
    {
        return (1);
    }
    printf("%s", s);
    free(s);
    return (0);
}
