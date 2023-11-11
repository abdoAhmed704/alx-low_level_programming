#include "lists.h"
/**
 * add_dnodeint_end - add a node at the end
 *
 * @head: pointer to the first node
 * @n: the data
 *
 * Return: pointer to the added node
*/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *tempNode = NULL;
	dlistint_t *ptr_head = *head;


	tempNode = malloc(sizeof(dlistint_t));
	if (tempNode != NULL)
	{
		tempNode->n = n;
		if (*head == NULL)
		{
			tempNode->next = NULL;
			tempNode->prev = NULL;
			*head = tempNode;
		}
		else
		{
			while ((*head)->next)
			{
				*head = (*head)->next;
			}
			tempNode->next = NULL;
			tempNode->prev = *head;
			(*head)->next = tempNode;
			*head = ptr_head;

		}
	}
	else
	{
		return (NULL);
	}
	return (tempNode);
}
