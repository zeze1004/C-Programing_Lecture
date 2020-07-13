#include <stdio.h>
#include <time.h>
#include <Windows.h>

void main()
{
	struct tm* mytstruct;
	time_t mytimer;
	mytimer = time(0);
	mytstruct = localtime(&mytimer);
	//printf("%s",ctime(&t));


	for (int i = 0; i < 9; i++)
	{
		Sleep(1000);
		printf("½Ã: %d\t", mytstruct->tm_hour);
		Sleep(1000);
		printf("ºÐ: %d\t", mytstruct->tm_min);
		Sleep(1000);
	
		printf("ÃÊ: %d\n", mytstruct->tm_sec);
	}
	

}