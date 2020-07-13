/*
038)
#include <time.h> 활용하게 되면 주요 5가지 기능이 있다.
(1) 실시간 mainboard 위에 real time clock 시계 값인 타이머 time_t 변수 형 선언,
(2) 타이머 time_t 변수 주소를 mainboard 위에 real time clock 시계 주소에 연결한 시계 초값 읽는 함수 time() 이용
(3) 구조체 struct tm mytstruct; 이용하여 timer time_t 값을 년,월,일,요일, 시,분,초 7종 정수값 선언 가능
(4) localtime() 함수 이용하여 (timer 주소입력- struct 주소출력) struct 변수 값으로 변환이 가능
(5) asctime() 함수를 이용하여
등을 이용할수 있다

(3)struct tm mytstruct; (4) localtime(), (5) asctime() 사용하지 말고
time() 함수만 이용하여 mainboard 위에 real time clock에서
 초값(sec) 값을 연속으로 mytimer=time(0); 읽어서 화면에 계속 초값을 표시하여라
*/

#include <stdio.h>
#include <time.h>

int main()
{
	while (1) //1 대신 true of i<100..보다 작다도 ok 
	{

		time_t mytimer, * Ptimer;
		//time_t: time 자료형
		//mytimer: time 변수

		Ptimer = &mytimer;
		//포인터변수 초기화 

		//time(&mytimer);
		//mytimer = time(0) 와 같다

/*3가지 방법으로 만들 수 있다
1. 포인터
2. 바로 변수 주소하기
3. 변수에 time(0) 선언
->time 안에는 0 or 주소만 들어갈 수 있다
*/

		time(Ptimer); //주소값 
		printf("%d\n", *Ptimer);
		//printf("%d\n",) 

	}//1초에 하나씩 증가,1970년부터 지금까지 누적된 시간이라함 

	return 0;
}