#include "linkedlist.h"

void remove_node(link *head, link p, link removed)
{
	//p�� ���� ���
	if (p == NULL)
		(*head) = (*head)->next;
	else
		p->next = removed->next;
	free(removed);
}
