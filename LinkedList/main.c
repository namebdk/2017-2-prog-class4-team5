#include "linkedlist.h"

link createNode(int value);
link append(link head, link cur);
link reverse(link head);
void middle(link head, int cnt);
void node_which(link *head, link h); // 홀수 번째 노드 삭제
int printList(link head);

int main(void)
{
	link head = NULL;
	link cur;
	int number, count = 0;
	printf("정수를 입력하세요(중단: CTRL + z)\n");

	while (scanf("%d", &number) != EOF)
	{
		count++;
		cur = createNode(number);
		head = append(head, cur);
	}
	
	printf("---------------------------------------------\n");
	printf("입력된 자료의 개수: %d\n\n", count);
	printf("---------------------------------------------\n");

	printf("노드 역순 출력\n\n");
	head = reverse(head);
	printList(head);
	head = reverse(head); //노드 순방향으로 복구 
	printf("---------------------------------------------\n");

	printf("노드 순방향 출력\n\n");
	printList(head);
	printf("---------------------------------------------\n");
	
	printf("중간 위치 값의 출력\n");
	middle(head, count);
	printf("---------------------------------------------\n");

	printf("홀수 번째 삭제한 뒤 출력\n");
	node_which(&head, head);
	printList(head);
	printf("---------------------------------------------\n\n");




	return 0;
}
