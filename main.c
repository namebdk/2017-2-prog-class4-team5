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
	printf("�Էµ� �ڷ��� ����: %d\n\n", count);
	printf("��� ���� ���\n");
	head = reverse(head);
	printList(head);
	head = reverse(head);

	printf("��� ������ ���\n");
	printList(head);

	return 0;
}