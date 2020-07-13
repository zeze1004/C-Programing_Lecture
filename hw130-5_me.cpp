/*
지난번 aban.dat 학생들 학번 int bun[100]; 영문이름 char stnam[100][19];
읽어들여 화면에  일련번호, 학번, 이름 등을 
printf("", i, bun[i], irum[i]); 표시하고  추가하여 
수학점수, 영어점수, 키 값을 화면 
printf("", i, bun[i], irum[i], math[i], eng[i], ki[i]); 표시하고,  
abannew.txt 에 일련번호 포함하여 저장하여라
*/

#include <iostream>
#include<stdlib.h>

int main()
{
	FILE* fp1 = fopen("aban.txt", "a+");
	FILE* fp2 = fopen("engScore.txt", "r+");
	FILE* fp3 = fopen("math.txt", "r+");
	FILE* fp4 = fopen("abannew.txt", "w");

	char aban[100] = { 0, };
	char eng[100] = { 0, };
	char math_ki[100] = { 0, };

	while (feof(fp1)==0)
	{
		
		fread(aban, sizeof(char), 4, fp1);
		fprintf(fp4, "%s", aban);
		printf("%s", aban);
	}
	while (feof(fp3) == 0)
	{
		fread(math_ki, sizeof(char), 10, fp3);
		printf("%s", math_ki);
		fprintf(fp4, "%s", math_ki);
	}
	while (feof(fp2) == 0)
	{
		fread(eng, sizeof(char), 4, fp2);
		printf("%s", eng);
		fprintf(fp4, "%s", eng);
	}
	int i = 0;


	return 0;
}