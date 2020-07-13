/*
struct tm jigum; 일반 구조체 이용하여 localtime(&mytimer) 7가지 member (회원) 숫자를 화면에 표시하여라

(1) myt->tm_year 올해 1900 이후 햇수(햇수+1900 더해야 함)
(2) myt->tm_mon 달월 (0,~11 더하기 +1해야 월수)
(3) myt->tm_mday 그달 날짜
(4) myt->tm_wday 요일 0=Sun,1,2,3, 4=Thu, 5=Fri, 6=Sat
(5) myt->tm_hour 시
(6) myt->tm_min 분
(7) myt->tm_sec 초
*/

#include <stdio.h>
#include <time.h>

void main()
{
	struct tm jigum;
	tm* myt;
	myt = &jigum;
	

	int cho, si, bun, yeon, wol, il;
	time_t mytimer;

	mytimer = time(0);
	jigum = *localtime(&mytimer);
	
	printf("연도: %d\n", myt->tm_year+1900);
	printf("달월: %d\n", myt->tm_mon+1);
	printf("날짜: %d\n", myt->tm_mday);
	printf("요일: %d\n", myt->tm_wday);
	printf("시: %d\n",myt->tm_hour);
	printf("분: %d\n",myt->tm_min );
	printf("초: %d\n",myt->tm_sec);

}