#include "linkedlist.h"

void remove_node(link *head, link p, link removed)
{
	//p는 이전 노드
	if (p == NULL)
		(*head) = (*head)->next;
	else
		p->next = removed->next;
	free(removed);
}
