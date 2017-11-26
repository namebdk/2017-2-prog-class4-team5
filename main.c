#include "linkedlist.h"

link CreateNode(int value);
link append(link head, link cur);
link middle(link head, int count);
void remove_node(link *head, link p, link removed);
void remove_oddnode(link *head);
void reverse(link head);
void printList(link);

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
	printf("\n중간 위치 노드 출력");
	middle(head, count);
	printf("노드 순방향 출력\n");
	printList(head);

	printf("홀수번째 노드 삭제\n");
	remove_oddnode(&head);
	printList(head);

	printf("입력된 자료의 개수 : %d", count);
	return 0;
}