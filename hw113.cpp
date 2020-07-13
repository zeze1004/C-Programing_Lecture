/*
데이터 fruit.txt 파일 속에 영문 과일 이름 
(1) 연번, (2)과일명, (3)각단어spell개수 표시
*/

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <iostream>
#include<cstring>
using namespace std;
int main()
{
	int ret;
	int i = 0;
	char frname[100][50] = { 0, };
	FILE* fp = fopen("data.txt", "r");
	if (fp == NULL)
		printf("실패\n");
	else
		printf("성공\n");

	int spell1 = 0;
	while (feof(fp) == 0)
	{
		spell1 = strlen(frname[i]);
		
		fscanf(fp, "%s", &frname[i]);
		printf("[%2d] %10s %2d\n", i, frname[i], strlen(frname[i]));
		//printf("%s",frname);
		i++;
	}
	return 0;
}