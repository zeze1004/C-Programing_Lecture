/*
59) 정수 난수 6개 정수배열 array로 표시하고, (1) 배열갯수, (2) 전체 합계, (3)최대값,
(4)최소값, (5)평균값, (6)median(중간값), (7)표준편차 화면에 표시
*/

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	int arr[40];
	int i = 0;
	int total=0;
	srand(time(0));

	for (i = 0; i < 6; i++)
	{
		arr[i] = rand();
		printf("[%d] = %d\n", i + 1, arr[i]);
		//total = arr[i]+arr[i];
		printf("total= %d\n", total);
	}
/*
1) 배열갯수, (2) 전체 합계, (3)최대값,
(4)최소값, (5)평균값, (6)median(중간값), (7)표준편차
*/
	printf("1)배열갯수: %d\n", i);
	printf("2)전체합계: %d\n", total);
}
