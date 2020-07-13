/*
데이터 파일 fruit.txt 파일 속에 영문 과일 이름 약 
11종류 이름이 들어 있는 파일을 만들어 fread( neyong, 300, 1, fpfruit); 
neyong 을 화면에 표시하라
*/


#include <stdio.h>
#include <string.h>
#include <iostream>
using namespace std;
int main()
{
	FILE* fpfruit = fopen("data.txt", "r");
	char neyong[100];
	fread(neyong, 300, 1, fpfruit);

	printf("%s\n",&neyong);

	return 0;
}