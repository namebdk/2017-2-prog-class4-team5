link reverse(link head)
{
	link temp_1;
	link temp_2 = NULL;
	link nextNode = head;

	while (nextNode != NULL)
	{
		temp_1 = temp_2;
		temp_2 = nextNode;
		nextNode = nextNode->next;
		temp_2->next = temp_1;

	}

	return temp_2;
}