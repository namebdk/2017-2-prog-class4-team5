#include "linkedlist.h"

link createNode(int value)
{
	link cur = (link)malloc(sizeof(node));
	if (cur == NULL)
	{
		printf("��� ������ ���� �޸� �Ҵ翡 ������ �ֽ��ϴ�\n");
		return NULL;
	}

	cur->value = (int *)malloc(sizeof(int));
	cur->value = value;
	cur->next =NULL;
	return cur;
}
