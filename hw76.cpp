/*
자기영문성명을 char *cpname(){return mnam;} 
사용자정의 함수, main call 받아 화면 성명표시
*/
#define _CRT_SECURE_NO_WARNINGS    // strcat 보안 경고로 인한 컴파일 에러 방지

#include <string.h>
#include <stdio.h>
#include <string>

char* cpname(char* orgin)	//문자열 포인터 함수(문자열 포인트)
{	
	
	char mnam[50] = "ksj"; //mnam = ksj
	strcpy(orgin, mnam);	//mnam -> orgin 복사
							//orgin에 mnam 문자열 복사?
	//orgin = &mnam[50];   --> 요렇게 하지 말기
	for (int i = 0; i < 50; i++)
	{
		printf("[%d] %c\n", i + 1, orgin[i]);
		if (orgin[i] == NULL)
			
			break;			
	}
	return mnam;
}

void maincall()
{

}

int main()
{	
	char name;
	char* adress;
	adress = &name;//adress = name 배열의 주소값
	cpname(adress);  //cpname에 name 주소값 전달

	return 0;
}