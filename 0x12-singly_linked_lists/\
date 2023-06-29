#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - add node
 * @head: pointer
 * @str: string
 *
 * Return: Always 0.
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *n;
	list_t *s = *head;
	unsigned int len = 0;

	while (str[len])
		len++;

	n = malloc(sizeof(list_t));
	if (!n)
		return (NULL);

	n->str = strdup(str);
	n->len = len;
	n->next = NULL;

	if (*head == NULL)
	{
		*head = n;
		return (n);
	}

	while (s->next)
		s = s->next;

	s->next = n;
	return (n);
}


