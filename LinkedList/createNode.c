#include "linkedlist.h"

link createNode(int value)
{
	link cur = (link)malloc(sizeof(node));
	if (cur == NULL)
	{
		printf("노드 생성을 위한 메모리 할당에 문제가 있습니다\n");
		return NULL;
	}

	cur->value = (int *)malloc(sizeof(int));
	cur->value = value;
	cur->next =NULL;
	return cur;
}
