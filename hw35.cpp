/*
file jeongsu.txt 속에 정수 4개를 int j1,j2,j3,j4; 차례로 fscanf() 읽어 들여  j1,j2,j3,j4 화면에 표시하여라
*/

#include <stdio.h>

void main()
{
	int arr[200];
	int j1, j2, j3, j4;
	FILE* fp = fopen("jeongsu.txt", "r");
	for (int i = 0; i < 4; i++)
	{
		fscanf(fp, "%d\n", &arr[i]);
	}
	j1 = arr[0];
	j2 = arr[1];
	j3 = arr[2];
	j4 = arr[3];
	fclose(fp);
	printf("%d\n%d\n%d\n%d\n", j1, j2, j3, j4);

}