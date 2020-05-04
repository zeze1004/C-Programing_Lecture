/*
72) 0부터 127 자연수를 1개씩
decimal, char, hexa, octal, binary
단stdlib,itoa()이용,각줄 표시.

앞뒤 printf("(dec)(char)(oct)(hex)(bin)\n");
*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int i = 0;
	char ksj2[10], ksj3[10], ksj5[10], ksj7[10], ksj9[10];
	while (i < 128)
	{
		printf("%d\t", i);
		printf("%c\t", i); //아스키코드 10번이 개행을 뜻한다
		printf("%x\t", i);
		printf("%o\t", i);
		_itoa_s(i, ksj2, 2);
		_itoa_s(i, ksj3, 3);
		_itoa_s(i, ksj5, 5);
		_itoa_s(i, ksj7, 7);
		_itoa_s(i, ksj9, 9);

		printf("%5s ", ksj2);
		printf("%5s ", ksj3);
		printf("%5s ", ksj5);
		printf("%5s ", ksj7);
		printf("%5s ", ksj9);
		
		//printf("%s", ksj);
		//(변환하는 정수,글자열 ,바꾸고 싶은 진수)는 itoa인수가 세 개라는 뜻
		printf("\n");
		i++;
	}
	return 0;
}
