#include"linkedlist.h"



int printList(link head)
 {
 	int cnt = 0;
 
  link nextNode = head;
 
 	while (nextNode != NULL)
 	{
 		cnt++;
 		printf("\t%d", nextNode->value);
 		nextNode = nextNode->next;
 
 	}
 	printf("\n");
 	return cnt;
 } 
