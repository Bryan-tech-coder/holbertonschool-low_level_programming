#include "lists.h"
#include <stdlib.h>
#include <string.h>
/**
 * free_dlistint - frees a dlistint_t list
 * @head: pointer to the head of the list
 * Return: void
 */
void free_dlistint(dlistint_t *head)

{
	dlistint_t *current = head;
	dlistint_t *next_node;

	while (current != NULL)
	{
		next_node = current->next;
		free(current);
		current = next_node;
	}
}
