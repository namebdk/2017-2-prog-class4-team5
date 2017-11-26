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
	printf("�Էµ� �ڷ��� ����: %d\n\n", count);
	printf("��� ���� ���\n");
	reverse(head);
	printf("\n�߰� ��ġ ��� ���");
	middle(head, count);
	printf("��� ������ ���\n");
	printList(head);

	printf("Ȧ����° ��� ����\n");
	remove_oddnode(&head);
	printList(head);

	return 0;
}