/*
시간값을 asctime() 변환한 전체 문자열 전체 중에 시:분:초 문자 열만
즉 부분 문자열 짤라내어 화면에 연속 계속 표시하여라
*/
#include <stdio.h>
#include <time.h>
void main()
{
	struct tm* mytstruct;
	time_t*Phour;
	time_t hour = mytstruct->tm_hour;
	Phour = &hour;
	time_t hour;
	
	hour = time(0);
	mytstruct = localtime(&hour);
	asctime(mytstruct);
	char *asc; 
	asc = asctime(mytstruct);
	
	printf("%s", asc);
	

	
}
