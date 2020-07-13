/*
지난번 aban.dat 학생들 학번 int bun[100]; 
영문이름 char stnam[100][19]; 읽어들여 화면에  
일련번호, 학번, 이름 등을 
printf("", i, bun[i], irum[i]); 표시하고  
추가하여 수학점수, 영어점수, 키 값을 화면 
printf("", i, bun[i], irum[i], math[i], eng[i], ki[i]); 표시하고,  
abannew.txt 에 일련번호 포함하여 저장하여라
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
int main()
{
	FILE* fp = fopen("name.txt", "r");
	int bum[100]; //학번
	int hakmax = 8978, hakmin = 3451;
	double kymin = 147.7;
	double kymax = 199.3;
	double kyrange = kymax - kymin;
	char stnam[100];
	int emin = 13;
	int emax = 98;
	int erange = emax - emin;
	int hakrange = hakmax - hakmin;
	int i = 0;
	int eng[100];
	double math[100], ky[100];
	double mathmax = 99.7, mathmin = 50.3;
	double mathrange = (mathmax - mathmin);
	char irum[50][100];
	int geasu;
	while (1)
	{
		if (fgets(irum[i], 30, fp) == NULL) 
			break;
		//fgets는 개행까지 포함
		geasu = strlen(irum[i]);
		irum[i][geasu-1] = '\0'; //개행까지 추가해서 geasu 마지막 하나 빼야 글자수다
		//eng[i] = rand() / (RAND_MAX) * (erange) + emin;
		printf("글자수: %d [%d] %s\n", geasu,i, irum[i]);
		i++;
	}
	int j = 0;
	while (j<100)
	{
		bum[j] = rand() / RAND_MAX * hakrange + hakmin;
		printf("%d학번 %d\n", j, bum[j]);
		j++;
	}
	int l = 0;
	while (l<100)
	{
		math[l] = (double)rand() / RAND_MAX * mathrange + mathmin;
		printf("%d학번 이름 %s 수학 %f\n", j,irum[l], math[l]);
		l++;
	}
	int k=0;
	while (k<100)
	{
		eng[k] = rand() / RAND_MAX * erange + emin;
		printf("%d학번 이름 %s 수학 %f 영어 %d\n", j, irum[k], math[k],eng[k]);
		k++;
	}
	int n = 0;
	while (n < 100)
	{
		ky[n] = (double)rand() / RAND_MAX * kyrange + kymin;
		printf("키: %f", ky[n]);
	}
	int m = 0;
	while ((m < 100)
	{
		fprintf(fp, "%d %d %s %ed %3d %f\n", bun irun math eng ky);
	}

	return 0;
}