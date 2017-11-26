link CreateNode(int value)
{
	link cur;

	cur = (link)malloc(sizeof(node));

	cur->value = (int *)malloc(sizeof(int));
	cur->value =N;

	cur->next =NULL;
	return cur;
}
