/*
1302)  aban 학생들 stmax=약100명 의 키 double ky[100]; 
최소 kymin=147.7cm, 최대키다리 kymax=199.3cm  범위 kybumwi=kymax-kimin; 내에 random() ky를 분포하여 화면 
printf(); 출력 file ky.txt에 저장하라
*/

#include <iostream>
#include <time.h>
#include<stdlib.h>
using namespace std;
int main()
{
	double ky[100];
	double kymin = 147.7;
	double kymax = 199.3;
	double kybumwi= kymax-kymin;
	//double random;
	
	FILE* fp = fopen("output.txt", "wt");
	for (int i = 0; i < 100; i++)
	{
		ky[i] = ((double)rand()*kybumwi) / RAND_MAX + kymin;	
		fprintf(fp, "[%d] %f\n",i, ky[i]);
		printf("[%d] %f\n",i, ky[i]);
	}

	return 0;
}