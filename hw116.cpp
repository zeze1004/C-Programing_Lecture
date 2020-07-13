/*
alphabet 순서로 가장 먼저 나오는 과일명 제외하고(빼고)
나머지 과일 명단을 새로운 2차원 문자열 저장
*/



#include <string.h>
#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	FILE* fp = fopen("data.txt", "r");
	char buffer[50][50] = { 0, };
	char buffer2[50][50] = { 0, };
	char buffer3[50][50] = { 0, };
	char temp[50] = { 0, };
	int i = 0;
	int num1 = 0;
	while (feof(fp) == NULL)
	{
		fscanf(fp, "%s ", buffer[i]);
		printf("[%2d] %2s \n", i + 1, buffer[i]);
		i++;
	}
	printf("---\n");

	for (int j = 0; j < i - 1; j++)
	{
		for (num1 = 0; num1 < (i - 1) - j; num1++)
		{
			if (strcmp(buffer[num1], buffer[num1 + 1]) == 1)
			{
				strcpy(temp, buffer[num1]);
				strcpy(buffer[num1], buffer[num1 + 1]);
				strcpy(buffer[num1 + 1], temp);
			}
		}
	}

	
	for (int x = 0; x < i; x++)
	{
		printf("[%2d] %2s \n", x + 1, buffer[x]);
	}
	return 0;
}