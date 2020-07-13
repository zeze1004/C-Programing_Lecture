/*
싯귀 text 속 0번쨰 글자 부터 99번째 글자 까지 연속번호, 문자, ASCII번호   화면에 printf("(%d)... \n",i,gulja, asc); 표시하라   
그 결과 이상한 출력 모양을 찾아 이유를 설명하라
*/

#include <iostream>

int main()
{
	FILE* fp = fopen("poem.txt", "r");
	if (fp == 0)
	{
		printf("error");
		return -1;
	}
	char gulga[4000];
	for (int i = 0; i < 100; i++)
	{
		
		fscanf(fp, "%c", &gulga[i]);
		int asc = gulga[i];
		printf("(%d)... %c %d \n", i, gulga[i], asc); //10 아스키: 공백
	}
	return 0;
}