void remove_node(link head, link remove, int num)
{
	int n = 0;
	if (num > n)
	{
		error("�� ��� �������� ���� ���� �Է��ϼ̽��ϴ�.");
	}
	n--;
	if (num == 1)
	{
		*head = (*head)->next;
	}
	else
	{
		link p = node_which(*head, num);
		remove = node_which(*head, num + 1);
		p->next = remove->next;
	}
	free(remove);
}
