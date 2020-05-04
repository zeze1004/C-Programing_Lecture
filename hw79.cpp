/*
	목함수는 main() 위에, 
	나모지함수는 main 뒤에
*/


#include <stdio.h>

int fnamoji(int num);	//프로토타입 선언: main 함수 뒤에 함수 선언할 때

int fmog(int jsu)
{
	int mog = jsu / 3;
	return mog;
}

int main()
{
	int num, mainmok, mainnamoji;

AA:
	printf("51~197사이 수 입력하시오: \n");
	scanf_s("%d", &num);
	if (num < 51 || num>197)
	{
		printf("다시 입력하시오: \n");
		goto AA;
	}
	mainmok = fmog(num);
	mainnamoji = fnamoji(num);
	printf("mok: %d , namoji: %d", mainmok, mainnamoji);

	return 0;
}

int fnamoji(int num)
{
	int namoji = num % 3;
	return namoji;
}