#include "lists.h"
/**
 * add_dnodeint - return the length of linked list
 *
 * @head: pointer to the first node
 * @n: the data
 *
 * Return: the length of linked list
*/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *tempNode = NULL;

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
			tempNode->next = *head;
			tempNode->prev = NULL;
			(*head)->prev = tempNode;
			*head = tempNode;
		}
	}
	else
		return (NULL);
	return (tempNode);

}
