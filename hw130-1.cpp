/*
aban 학생들 stmax=약100명 의 수학점수 int math[100]; 
최소 mmin=13점, 최대점수 mmax=96점  범위 bumwi=mmax-mmin; 
내에 random() 점수를 분포하여 화면 printf(); 출력 file mjumsu.txt에 저장하라
*/

#include <iostream>
#include <time.h>
int main()
{
	FILE* fp = fopen("output.txt", "w");
	int stmax = 100;
	
	int mmin = 13;
	int mmax = 96;
	int bumwi;
	for (int i = 0; i < 100; i++) {
		bumwi = rand() % (mmax - mmin) + mmin;
		fprintf(fp, "[%d] %d\n", i + 1, bumwi);
		printf("[%d] %d\n", i + 1, bumwi);
	}
	


	return 0;
}