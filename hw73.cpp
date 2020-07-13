#include <stdio.h>
#include <stdlib.h>

/*
73) 51~197사이 자연수를 keyb scanf(&)들여 
3으로 나눈 목mok과 나머지namoji화면 
printf()표시
*/
int main()
{
	int i = 0;
	int mok, namoji;
	AA:
	printf("51~197사이 수 입력하시오: \n");
	scanf_s("%d",&i);
	if (i < 51 || i>197)
	{
		printf("다시 입력하시오: \n");
		goto AA;
	}
	


	mok = i / 3;
	namoji = i % 3;

	printf("몫: %d\n",mok);
	printf("몫: %d\n",namoji);
	



	return 0;
}