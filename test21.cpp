#include <stdio.h>
#include <time.h>
#include <windows.h>

void main()
{
	time_t mytimer, * Ptimer1, * Ptimer2;
	Ptimer1 = &mytimer;
	Ptimer2 = &mytimer;
	int time1, time2;
	int i = 0;
aa:
	while (i<7)
	{

		time1 = time(Ptimer1);
		Sleep(1000);
		i++;
		break;
		
	}
	printf("SEC: %d\n", time1);

	goto aa;




}
