#include "Rotation.h"

int main()
{
	char *CharArrayOfLength, d, N = 0;
	clock_t start, finish;
	double duration;


	printf("d와 Array size를 입력하세요 :");
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
	printf("문자열 출력 : %s\n", CharArrayOfLength);
	printf("trivial solution = %f 초입니다.\n", duration);


	start = clock();
	Juggling(CharArrayOfLength, N, d);
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("문자열 출력 : %s\n", CharArrayOfLength);
	printf("juggling = %f 초입니다.\n", duration);


	start = clock();
	blockswap(CharArrayOfLength, N, d);
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("문자열 출력 : %s\n", CharArrayOfLength);
	printf("block-swap = %f 초입니다.\n", duration);


	start = clock();
	//reverse 
	finish = clock();
	duration = (double)(finish - start) / CLOCKS_PER_SEC;
	printf("문자열 출력 : %s\n", CharArrayOfLength);
	printf("reverse = %f 초입니다.\n", duration);

	return 0;
}























