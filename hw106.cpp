/*
irum.txt 파일속에 fscanf("", irum[i]); 읽어 irum[i-0] 과 irum[i]   
앞 뒤 이름 두개씩 비교하여 영어 사전 
"alphabet 순서 irum[i-0] 가 irum[i]  보다 앞이다"
*/
#include <stdio.h>
#include <string.h>
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

	int read1, read2;
	char gulja[100];
	char irum[15][20] = { 0, };
	char buffer[100];
	int i = 0;
	while (1)
	{
		read2 = fscanf(fp, "%s", &irum[i]);
		if (read2 == -1)
			break;
		printf("%s\n", irum[i]);
		i++;
		if (feof(fp))
			break;
	}
	int j = 0;
	char *tmp1[100];
	char *tmp2[100];
	while (j<10)
	{
		int ret = strcmp(irum[j], irum[j + 1]);
		if (ret==1)
		{
			printf("%s가 %s보다 앞선다\n", irum[j+1], irum[j]);	
		}
		else if (ret==-1)
		{
			printf("%s가 %s보다 앞선다\n", irum[j], irum[j+1 ]);
			
		}
		else
			printf("%s와 %s는 같다\n", irum[j + 1], irum[j]);
		j++;

	}

	return 0;
}