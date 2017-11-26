int printList(link head)
{
	int cnt = 0;

	Node nextNode = head;

	while (nextNode != NULL)
	{
		cnt++;
		printf("\t%d", nextNode->value);
		nextNode = nextNode->next;

	}
	printf("\n");
	return cnt;
}