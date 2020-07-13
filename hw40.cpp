/*
040) struct tm *mytstruct; pointer형 이용하여 localtime(&mytimer) 이용하여
7가지 member (회원) 숫자를 화면에 표시하여라  struct tm *myt; 구조체 7가지
 member 정수는  (1) myt->tm_year 올해 1900 이후 햇수(햇수+1900 더해야 함)
 (2) myt->tm_mon 달월 (0,~11 더하기 +1해야 월수)  (3) myt->tm_mday 그달 날짜
 (4) myt->tm_wday 요일 0=Sun,1,2,3, 4=Thu, 5=Fri, 6=Sat  (5) myt->tm_hour 시
 (6) myt->tm_min 분  (7) myt->tm_sec 초  * pointer 형 구조체의 변수와
 member 사이 에는 -> 로 구분한다  위 반대로 * pointer 형 아닌 구조체
struct 일반 변수 와  member 사이 에는 strcutvariable.member 로 (.)구분한다
*/

#include <stdio.h>
#include <time.h>

int main()
{
	//mystruct1 초기화 안하는 이유 : 27줄에서 초기화 
	struct tm* mystruct1, mystruct2; //구조체 변수들 
	//struct tm *mystruct;
	int cho, si, bun, yeon, wol, il;
	time_t ksj;
	while (1)
	{

		ksj = time(0);
		/***포인터변수 사용****/
//		mystruct1 = localtime(&ksj); //localtime() 함수 / my1 포인터 변수 초기화 
//		cho = mystruct1->tm_sec;   //*변수 사용시 -> 구조체 멤버 가르킴(tm 구조체 변수들은 바꾸지말자) 
//		si = mystruct1->tm_hour;
//		bun = mystruct1->tm_min;
//		
//		yeon = mystruct1->tm_year+1900; //1900을 더해야 
//		wol = mystruct1->tm_mon+1;
//		il = mystruct1->tm_mday;
//		
//		printf("연 :%d 월: %d 일: %d\n",yeon,wol,il); 
//		printf("시:%d 분: %d 초: %d\n",si,bun,cho); 


		mystruct2 = *localtime(&ksj); //localtime() 함수 주소값을 줌 
		//localtime이 주소여서 *을 붙이면 주소에 있는 내용을 가지게 됨으로, 내용을  mystruct2에게 넘김 
		cho = mystruct2.tm_sec;   //일반 변수 사용시 구조체변수. 구조체 멤버 가르킴(tm 구조체 변수들은 바꾸지말자) 
		si = mystruct2.tm_hour;
		bun = mystruct2.tm_min;

		yeon = mystruct2.tm_year + 1900; //1900을 더해야 현재 연도가 나오기로 약속함 
		wol = mystruct2.tm_mon + 1;      //1을 더해야 현재 날짜가 나오기로 약속함 
		il = mystruct2.tm_mday;

		printf("연 :%d 월: %d 일: %d\n", yeon, wol, il);
		printf("시:%d 분: %d 초: %d\n", si, bun, cho);

	}
	return 0;
}