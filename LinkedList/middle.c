#include "linkedlist.h"

void middle(link head, int cnt)
{
	link nextNode = head;
	int n = 0;

	if (cnt % 2 == 0) // 입력자료의 개수가 홀수
	{ 
		while (n != (cnt / 2) - 1)
		{
			nextNode = nextNode->next;
			n++;
		}
		printf("\t%d", nextNode->value);
		nextNode = nextNode->next;
		printf("\t%d", nextNode->value);
	}
	else
	{
		while (n != cnt / 2)
		{
			nextNode = nextNode->next;
			n++;
		}
		printf("\t%d", nextNode->value);
	}
	printf("\n");
}