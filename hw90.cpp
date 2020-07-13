/*
자연수 12 ~ 98 사이 약7개 숫자 저장되어 있는 파일 jasu.txt 을 scanf(); 읽어서   
첫칸에 연속번호 함께 화면에 그 자연수를 전부 cout<< 표시하여라
*/

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

	int buffer[100];
	int max = 0;
	int result,nmax;
	int i = 0;
	while (1)
	{
		result = fscanf(fp,"%d", &buffer[i]);
	
		if (result == EOF) 
		{
			break;			
		}
	
		cout <<"["<<i<<"]"<< buffer[i] << endl;
		max = i+1;
		i++;
		
	}
	printf("namx: %d\n", max);



	return 0;
}