/*
위에 자연수를 절반 즉 /2.0 실수를 6번째 칸에,   
그 1/2 절반수 실수를 binary숫자를 표시 7번째 칸에 표시 하여라.  
binary 숫자는 1/2배 하면 즉 /2.0계산하면, 
오른쪽으로 1칸 shift됨을 보여라
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
	int i = 0;
	int buffer[100];
	int buffer2[100] = { 0, };
	int max = 0;
	char binary[100];
	char binary2[100];
	char binary3[100][100];
	char binary4[100];
	int result, nmax;
	float fbinary[100];
	char a_bin[100] = { 0, };

	while (1)
	{
		result = fscanf(fp, "%d", &buffer[i]);
		if (result == EOF)
		{
			break;

		}
		
		_itoa(buffer[i], binary, 2);
		_itoa(buffer[i] * 2, binary2, 2);
		fbinary[i] = (float)buffer[i];
		_itoa(fbinary[i] / 2, binary4, 2);
		cout << "[" << i << "]" << buffer[i] << "\t" << binary << "\t  " << buffer[i] * 2 << "\t" << binary2<< "\t" << fbinary[i] / 2 << "\t" << binary4 << endl;



		//cout<<"정수*2 = "<<buffer[i]*2 << endl;
		max = i + 1;
		i++;

	}
	
	fclose(fp);

	return 0;
}
	/*
	printf: 화면에 출력한다
	fprintf: 파일에 출력한다
	sprintf: string에 출력한다
	윈도우에서 디폴트로 확장자를 숨기게 했다.
	.txt.txt가 저장될 경우: 확장자가 감춰진 경우에서 생긴다.
	파일탐색기에서 확정자 보이기로 바꿔서 다시 설정한다

	10진수는 2배가 되고 2진수는 맨 뒤에 0이 붙고 왼쪽으로 shitf한다
	10진수를 8배하면 2진수는 왼쪽으로 세 번 shift된다

	배열 안에 값이 몇 개인지 모를 때
	for (int i = 0; buffer2[i] != NULL; i++)
	배열 초기화
	*/
