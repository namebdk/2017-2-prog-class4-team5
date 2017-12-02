#include "linkedlist.h"

link append(link head, link cur)
{
	link nextNode = head;

	if (head == NULL)
	{
		head = cur;
		return head;
	}

	while (nextNode->next != NULL)
	{
		nextNode = nextNode->next;
	}

	nextNode->next = cur;

	return head;
}