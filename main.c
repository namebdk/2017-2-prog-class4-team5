#include "linkedlist.h"

link CreateNode(int value);
link append(link head, link cur);
link reverse(link head);
int printList(link);

int main(void)
{
	link head = NULL;
	link cur;
	int number, count = 0;

	while (scanf("%d", &number) != EOF)
	{
		count++;
		cur = CreateNode(number);
		head = append(head, cur);
	}
	printf("입력된 자료의 개수: %d\n\n", count);
	printf("노드 역순 출력\n");
	head = reverse(head);
	printList(head);
	head = reverse(head);

	printf("노드 순방향 출력\n");
	printList(head);

	return 0;
}