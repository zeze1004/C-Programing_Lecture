/*
real time clock에서 초값(sec) 값을 연속으로 time(&mytimer)읽어서 화면에 서로다른 초값 경우만 초값을 표시하여라
*/

#include <stdio.h>
#include <time.h>
#include <windows.h>

void main()
{
	time_t mytimer, * Ptimer1, * Ptimer2;
	Ptimer1 = &mytimer;
	Ptimer2 = &mytimer;
	int time1, time2;
aa:
	while (1)
	{

		time1 = time(Ptimer1);
		Sleep(1000);
		break;
	}
	printf("SEC: %d\n", time1);
	
	goto aa;
		

	
	
}