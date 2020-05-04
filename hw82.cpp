/*
이진수 만들기 위하여 data.txt에서 
정수 1개를 읽어서 몫을 계속 
다시 2로 나누어 나머지만 출력하라

*/

#include <stdio.h>
#include <stdlib.h>



int main()
{
	int num;
	
	FILE* fp;
	fopen_s(&fp, "data.txt", "r");
	fscanf_s(fp, "%d", &num);
	printf("%d\n", num);
	int namoji;
	int mok=0;
	printf("%d\n",num);
	mok = num; //mok =123
	
	int i = 0;
	int tmp1[100], tmp2[100];
	while (1)
	{
		tmp1[i] = mok % 2;
		mok = mok / 2;
		
		
		
		
		printf("나머지: %d\n", tmp1[i]);
		i++;

		if (mok == 0)
		{
			printf("끝\n");
			
			break;
		}
	}
	for (int j = 0; j < i; j++) {
		printf("[%d] %d\n",j, tmp1[j]);
	}
	for (int j = 0; j < i; j++)
	{
		tmp2[j] = tmp1[i - j-1];
		
	}
	printf("------역배열------\n");
	for (int j = 0; j < i; j++)
	{
		printf("%d\n", tmp2[j]);
		
	}

	printf("------배열 확인-----\n");
	for (int j = 0; j < i; j++)
	{
		printf("%d\n", tmp1[j]);
	}

	int check = 0;
	int one = 1;

	for (int j = 0; j < i; j++)
	{		
		check = check + (tmp1[j] * one);
		printf("check: %d\n", check);

		one = one * 2;
	}
	printf("%d\n", check);

	fclose(fp);
	return 0;
}