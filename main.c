#include "linkedlist.h"

link CreateNode(int value);
link append(link head, link cur);
link reverse(link head);
void middle(link head, int cnt)
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
	head = reverse(head); //노드 순방향으로 복구 

	printf("노드 순방향 출력\n");
	printList(head);
	
	printf("중간 위치 값의 출력\n");
	middle(head, count); 

	return 0;
}
