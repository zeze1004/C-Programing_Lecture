/*
자연수 main(){scanf();} 읽어 3으로 나눈목값을 string munjapoint return munjapoint;주는
사용자_함수 char* spmok(){ return return munjapoint;} 받아 표시*/

#include <stdio.h>

char* spmok(int returnNum)
{
	printf("%c\n", returnNum);
	return 0;
}
int main()
{
	int num;
	printf("정수 입력하시오: ");
	scanf_s("%d\n", &num);
	num = num / 3;
	spmok(num);

	printf("num: %d\t%c", num, num);
}