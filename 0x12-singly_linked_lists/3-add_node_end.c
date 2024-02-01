#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"
/**
* add_node_end - function to add node at end of list
* @head: pointer of first element
* @str: element to add
* Return: pointer of last element
*/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *temp;
	list_t *newNode;

	newNode = (list_t *)malloc(sizeof(list_t));
	if (newNode == NULL)
		return (NULL);

	newNode->str = strdup(str);
	if (newNode->str == NULL)
	{
		free(newNode);
		return (NULL);
	}

	newNode->len = strlen(newNode->str);
	newNode->next = NULL;

	if (*head == NULL)
	{
	/* If the list is empty, set the new node as the head*/
		*head = newNode;
	}
	else
	{
		/* If the list is not empty, traverse to the end and add the new node*/
		temp = *head;
		while (temp->next != NULL)
		{
			temp = temp->next;
		}
	temp->next = newNode;
	}

	return (newNode);
}

