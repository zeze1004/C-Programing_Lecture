/*
string=asctime(구조체 변수 주소 또는 pointer형 구조체 변수); 사람이 읽기 쉬운 문자열로 변화하여 준다
시간값을 asctime() 변환한 전체 문자열 전체를 계속하여 화면에 표시하여라
*/
#include <stdio.h>
#include <time.h>
void main()
{
	struct tm* mytstruct;
	time_t mytimer;
	mytimer = time(0);
	mytstruct = localtime(&mytimer);
	printf("%s",asctime(mytstruct));
	printf("%s", ctime(&mytimer));

	while (1)
	{
		printf("%s", asctime(mytstruct));
	}
}