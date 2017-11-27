link node_which(link p, int num)
{
	int i;

	for (i = 2; i < num; i++)
	{
		p = p->next;
	}
	return p;
}
