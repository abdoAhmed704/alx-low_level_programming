#include "lists.h"

/**
 * add_node - adds a node to the start of the list
 * @head: address of pointer to head node
 * @str: str field of node
 *
 * Return: size of list
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *tempNode = NULL;

	if (str != NULL)
	{
		tempNode = (list_t *)malloc(sizeof(list_t));
		if (tempNode != NULL)
		{
			tempNode->str = strdup(str);
			if (*head == NULL)
			{
				*head = tempNode;
			}
			else
			{
				tempNode->next = *head;
				*head = tempNode;
			}

		}
		else
		{
			/*nothing*/
		}
	}
	else
	{
		/*nothing*/
	}
	return (tempNode);
}
