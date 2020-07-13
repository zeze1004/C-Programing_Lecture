/*
aban 학생들 stmax=약100명 의 영어점수 int eng[100]; 
최소 enmin=13점, 최대점수 enmax=96점  범위 bumwi=enmax-enmin;
내에 random() 점수를 분포하여 화면 printf(); 
출력 file enjumsu.txt에 저장하라
*/
#include <iostream>
#include<stdlib.h>
using namespace std;
int main()
{
	int stmax[100];
	int eng[100];
	int enmin = 13;
	int enmax = 96;
	int bumwi = enmax - enmin;

	FILE* fp = fopen("engScore.txt", "wt");
	for (int i = 0; i < 100; i++)
	{
		eng[i] = (rand() * bumwi) / RAND_MAX + enmin;
		fprintf(fp, "[%d] %d\n", i, eng[i]);
		printf("[%d] %d\n", i, eng[i]);
	}


	return 0;
}