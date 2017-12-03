#include "Rotation.h"

int main()
{
	char *N, d, CharArrayOfLength = 0;
	clock_t start, finish;
	double duration;

	printf("d�� Array size�� �Է��ϼ��� :");
	scanf("%d %d", &d, &CharArrayOfLength);

	N = (char *)malloc(sizeof(char)*CharArrayOfLength);
	
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		str[i] = (rand() % 26 + 'A');
	}
	str[N] = NULL;

	if (N == NULL)
	{
		printf("ERROR");
		exit(1);
	}
	printf("���ڿ� �����Է� : ");
	str = (char*)malloc(sizeof(char) * (N + 1));
	srand(time(NULL));
	for (int i = 0; i < N; i++)
	{
		str[i] = (rand() % 26 + 'A');
	}
	str[N] = NULL;

	start = clock();
	//trivial solution
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("���ڿ� ��� : %s\n",N);
	printf("trivial solution = %f ���Դϴ�.\n", duration);

	start = clock();
	Juggling(N, CharArrayOfLength, d);
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("���ڿ� ��� : %s\n", N);
	printf("juggling = %f ���Դϴ�.\n", duration);

	start = clock();
	//blockk-swap
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("���ڿ� ��� : %s\n", N);
	printf("block-swap = %f ���Դϴ�.\n", duration);

	start = clock();
	//reverse
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("���ڿ� ��� : %s\n", N);
	printf("reverse = %f ���Դϴ�.\n", duration);



	return 0;
}
