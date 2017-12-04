#include "Rotation.h"

int main()
{
	char *CharArrayOfLength, d, N = 0;
	clock_t start, finish;
	double duration;


	printf("d�� Array size�� �Է��ϼ��� :");
	scanf("%d %d", &d, &N);


	CharArrayOfLength = (char *)malloc(sizeof(char)*N + 1);

	if (CharArrayOfLength == NULL)
	{
		printf("ERROR");
		exit(1);
	}

	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		CharArrayOfLength[i] = (rand() % 26 + 'A');

	}
	CharArrayOfLength[N] = NULL;


	start = clock();
	//trivial solution 
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("���ڿ� ��� : %s\n", CharArrayOfLength);
	printf("trivial solution = %f ���Դϴ�.\n", duration);


	start = clock();
	Juggling(CharArrayOfLength, N, d);
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("���ڿ� ��� : %s\n", CharArrayOfLength);
	printf("juggling = %f ���Դϴ�.\n", duration);


	start = clock();
	blockswap(CharArrayOfLength, N, d);
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("���ڿ� ��� : %s\n", CharArrayOfLength);
	printf("block-swap = %f ���Դϴ�.\n", duration);


	start = clock();
	//reverse 
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("���ڿ� ��� : %s\n", CharArrayOfLength);
	printf("reverse = %f ���Դϴ�.\n", duration);

	return 0;
}























