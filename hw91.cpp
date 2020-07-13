/*
위에서 binary 변환 숫자를 화면 3번째 칸에 표시하여라.
*/
#include <stdlib.h>
#include <stdio.h>
#include<iostream>
using namespace std;

int main()
{
	FILE* fp = fopen("data.txt", "r");
	if (fp != NULL)
	{
		printf("file open sucess\n");
			
	}
	else
	{
		printf("error\n");
	}
	int num = 0;
	char binary[100];
	int buffer[100];
	int max = 0;
	int result, nmax;
	int i = 0;
	while (1)
	{
		result = fscanf(fp, "%d", &buffer[i]);
		if (result == EOF)
		{
			break;

		}
		//cout << buffer[i] << endl;
		max = i + 1;
		cout <<"["<<i<<"]"<< buffer[i] << ":  " << _itoa(buffer[i], binary, 2)<<endl ;
		i++;
	}
	printf("namx: %d\n", max);



	fclose(fp);

	return 0;
}