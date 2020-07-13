/*
데이터 fruit.txt 파일 속에 영문 과일 이름 약 11종류 과일 영문단어
frnam[19][24]; 
*/
#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
	FILE* fpfruit = fopen("data.txt", "r");
	char neyong[100];
	char frnam[100][100] = { 0, };

	int i = 0;
	while (feof(fpfruit) == 0)
	{
		i++;
		fscanf(fpfruit, "%s",frnam[i] );
		printf("[%2d] %2s\n",i, frnam[i]);
	}

	return 0;
}