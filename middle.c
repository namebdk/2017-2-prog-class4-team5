void middle(link head, int cnt)
{
	link nextNode = head;
	int n = 0;
	if (cnt % 2 == 0)
	{
		printf("\n- 중간 위치 값 출력(2개) :\n");
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
		printf("\n- 중간 위치 값 출력(1개) :\n");
		while (n != cnt / 2)
		{
			nextNode = nextNode->next;
			n++;
		}
		printf("\t%d", nextNode->value);
	}
	printf("\n");


}