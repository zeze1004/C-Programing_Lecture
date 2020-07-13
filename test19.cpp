#include <stdio.h>


int dan(int n)
{
	int num1, num2;



		printf("%d단 출력\n", n);
		for (num2 = 1; num2 < 10; num2++)
		{

			printf("%d * %d = %d \n", n, num2, n * num2);
		}
		
		return 0;
}

int main()
{

	int num1, num2;

	int key;
	for (num1 = 1; num1 < 6; num1++)
	{
		printf("%d단 출력\n", num1);
		for (num2 = 1; num2 < 10; num2++)
		{

			printf("%d * %d = %d \n", num1, num2, num1 * num2);
		}
	}
	printf("1-9 중 하나의 정수만 입력하시오: \n");
	scanf("%d", &key);
	dan(key);

	return 0;
}