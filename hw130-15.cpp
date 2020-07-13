/*
(1)1번 -99번 숫자표시, (2) rand()표시, (3)randmax표시, 
(4) 비율 %f (5)최소=98 ,(6)최대13, (7)비율%d (8) 비율+최소 각 칸에표시하라
*/

#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
int main()
{
	int num,max;
	float fnum;
	int emin, emax, ebumwi, ebiyul,eng; 
	emin = 13;
	emax = 98;
	ebumwi = emax - emin;
	
	max = RAND_MAX; //최대값은 RAND_MAX,<stdlib.h>에 지정, 32767
	srand(rand());
	for (int i = 1; i < 100; i++)
	{
		num = rand();
		fnum = (float)num / (float)max;
		ebiyul = ebumwi * fnum;
		eng = ebiyul + emin;
		printf("%2d %5d %d %f emin: %d emax: %d ebumwi: %d ebiyul: %d %d\n", 
			i, num, max,fnum,emin,emax,ebumwi,ebiyul,eng);
	}

	return 0;
}