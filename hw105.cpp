/*
irum.txt 파일속에 Tom, Mary, Thomas, Judy 등등 영문 이름이
약 11명 차례로 저장하라  char irum[15][20]; 을 차례로 
(1)fscanf("%c", ch1); (2)fread(), (3)fscanf("", irum[i]); 
읽어 들여 화면에 연속 번호 붙여 표시하라
*/

#include <iostream>
using namespace std;

int main()
{
	FILE* fp = fopen("data.txt", "r");
	if (fp != 0)
	{
		printf("file successful\n");
	}
	else
		printf("error");
	char irum[15][2];
	char ch1;

	//fscanf %c
	int i = 0;
	int fsnum1 = 0;
	printf("fscanf\n");
	while (feof(fp) == NULL)
	{
		fscanf(fp, "%c", &ch1);
		printf("%c", ch1);
		fsnum1++;	
	}
	int fnum = 0;
	rewind(fp);
	//fread
	printf("\nfread\n");
	char buffer[100];
	int readBuffer;
	while (feof(fp) ==0)
	{
		fread(buffer, sizeof(buffer), 1, fp);
		printf("%s", buffer);
		memset(buffer, 0, 5);
		fnum++;

	}
	rewind(fp);
	printf("\nfscanf\n");
	char read;
	char gulja[100] = { 0, };
	int j = 0;
	while (feof(fp) == NULL)
	{
		read=fscanf(fp, "%s", &irum[j]);
		printf("%s\n", irum[j]);
		
		j++;
		
	}

	fclose(fp);
	return 0;
}