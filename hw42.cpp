/*
struct tm *mytstruct; pointer형 이용하여 localtime(&mytimer) 이용하여 3가지 member (회원)
시:분:초 형식으로 화면에 연속하여 표시하여라
*/

#include <stdio.h>
#include <time.h>

void main()
{
	struct tm* mytstruct;
	time_t mytimer;
	mytimer = time(0);
	mytstruct = localtime(&mytimer);
	//printf("%s",ctime(&t));
	printf("시: %d\t", mytstruct->tm_hour);
	printf("분: %d\t", mytstruct->tm_min);
	printf("초: %d\n", mytstruct->tm_sec);

}
