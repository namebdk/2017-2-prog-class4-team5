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

void node_which(link *head, link h)
{
	link phead, prev = NULL;
	int count = 0;
	phead = *head;

	while (phead != NULL)
	{
		if (count % 2 == 0)
		{
			remove_node(head, prev, phead);
			if (prev != NULL)
				phead = prev->next;
			else
				phead = *head;
		}
		else
		{
			prev = phead;
			phead = phead->next;
		}
		count++;
	}
	
}
