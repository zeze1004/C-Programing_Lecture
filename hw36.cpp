/*
file jeongsu.txt 속에 정수 4개를 pointer 형 변수 int *j1,*j2,*j3,*j4; fscanf() 읽어 들여  *j1, *j2,*j3, *j4 화면에 표시하여라
*/
#include <stdio.h>
void main()
{
	int* j1, * j2, * j3, * j4;
	int num[200];
	j1 = &num[0]; j2 = &num[1]; j3 = &num[2]; j4 = &num[3];
	FILE* fp = fopen("jeongsu.txt", "r");
	for (int i = 0; i < 4; i++)
	{
		fscanf(fp, "%d", &num[i]);
	}
		
	
	printf("%d\n", *j1);
	printf("%d\n", *j2);
	printf("%d\n", *j3);
	printf("%d\n", *j4);
	fclose(fp);
}