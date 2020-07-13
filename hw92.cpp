/*
위에 자연수를 2배 즉 *2 자연수를 4번째 칸에,   
그 2배수를 binary숫자를 표시 5번째 칸에 표시 하여라.
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
	int result, nmax;
	while (1)
	{
		result = fscanf(fp, "%d", &buffer[i]);
		if (result == EOF)
		{
			break;

		}
		buffer2[i] = buffer[i];
		_itoa(buffer[i], binary, 2);
		_itoa(buffer[i] * 2, binary2, 2);
		cout << "[" << i << "]" << buffer[i] << "\t" << binary << "\t  " << buffer[i] * 2 << "\t" << binary2 << endl;

		//cout<<"정수*2 = "<<buffer[i]*2 << endl;
		max = i + 1;
		i++;

	}
	printf("---2차원배열---\n");
	printf("bin주소 = %ld\n", binary3[0]);
	printf("bin주소 = %d\n", &binary3[0]);
	printf("bin주소 = %ld\n", binary3[1]);
	printf("bin주소 = %d\n", &binary3[1]);
	printf("%c\n", binary3[0][0]);
	printf("%d\n", binary3[0][0]);

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


*/