#include <iostream>

int main()
{
	int i;
	char gulja;
	printf("65-90\n"); //소문자 출력
	for (i = 65; i <= 90; i++)
	{
		gulja = i;
		printf("[%d] %c\t", i, gulja);
	}
	printf("\n97-122\n");
	for (i = 97; i <= 122; i++) //대문자 출력
	{
		gulja = i;
		printf("[%d] %c\t", i, gulja); //printf("%c",i)로도 바로 문자출력 가능
	}
	return 0;
}