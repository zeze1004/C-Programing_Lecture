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
	char ksj[10];
	while (i < 128)
	{
		printf("%d\t", i);
		printf("%c\t", i); //아스키코드 10번이 개행을 뜻한다
		printf("%x\t", i);
		printf("%o\t", i);
		_itoa_s(i, ksj, 2);
		//printf("%s", ksj);
		//(변환하는 정수,글자열 ,바꾸고 싶은 진수)는 itoa인수가 세 개라는 뜻
		printf("\n");
		i++;
	}
	return 0;
}
