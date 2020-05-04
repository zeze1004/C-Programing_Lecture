/*
74) 자연수 main(){scanf();} 읽어 
jin=3으로 나눈목값을 return mog;주는

사용자_함수 int mok(int jsu)
{ return mog;} 함수값 받아서 
main()표시

*/

#include <stdio.h>

int mog(int jsu)
{
	int mog = jsu / 3;
	return mog;
}

int main()
{
	int num, mainmok, namoji;

	AA:
	printf("51~197사이 수 입력하시오: \n");
	scanf_s("%d", &num);
	if (num < 51 || num>197)
	{
		printf("다시 입력하시오: \n");
		goto AA;
	}
	mainmok = mog(num);
	namoji = num % 3;
	printf("mok: %d , namoji: %d", mainmok, namoji);

	return 0;
}