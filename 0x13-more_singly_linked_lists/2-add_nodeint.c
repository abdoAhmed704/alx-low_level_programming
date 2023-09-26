#include "lists.h"

/**
 * add_nodeint - adds a node to the top
 * @head: pointer to first node
 * @n: value for new node
 *
 * Return: pointer to new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *node = malloc(sizeof(listint_t));

	if (head == NULL || node == NULL)
		return (NULL);

	node->next = NULL;
	node->n = n;
	if (*head)
		node->next = *head;
	*head = node;
	return (node);
}
