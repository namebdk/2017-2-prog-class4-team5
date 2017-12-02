#include "linkedlist.h"

link createNode(int value);
link append(link head, link cur);
link reverse(link head);
void middle(link head, int cnt);
void node_which(link *head, link h); // Ȧ�� ��° ��� ����
int printList(link head);

int main(void)
{
	link head = NULL;
	link cur;
	int number, count = 0;
	printf("������ �Է��ϼ���(�ߴ�: CTRL + z)\n");

	while (scanf("%d", &number) != EOF)
	{
		count++;
		cur = createNode(number);
		head = append(head, cur);
	}
	
	printf("---------------------------------------------\n");
	printf("�Էµ� �ڷ��� ����: %d\n\n", count);
	printf("---------------------------------------------\n");

	printf("��� ���� ���\n\n");
	head = reverse(head);
	printList(head);
	head = reverse(head); //��� ���������� ���� 
	printf("---------------------------------------------\n");

	printf("��� ������ ���\n\n");
	printList(head);
	printf("---------------------------------------------\n");
	
	printf("�߰� ��ġ ���� ���\n");
	middle(head, count);
	printf("---------------------------------------------\n");

	printf("Ȧ�� ��° ������ �� ���\n");
	node_which(&head, head);
	printList(head);
	printf("---------------------------------------------\n\n");




	return 0;
}
