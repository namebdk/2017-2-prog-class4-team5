#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node
{
	int value;
	struct node *next;
};
typedef struct node node;
typedef node * link;