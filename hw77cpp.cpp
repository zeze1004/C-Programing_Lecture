/*
0부터 127 자연수를 각줄에 1개씩 while 이용
decimal %2d, %4d, %9d, char, hexa, octal, 표시하라
*/

#include <stdio.h>
#include <stdlib.h>
#include<iostream>
using namespace std;

int main()
{
	int num;
	for (int i = 0; i < 128; i++)
	{		
		printf("[%d]\t", i);
		printf("%c\t", i);
		cout << "8진수:\t" << oct << i ;
		cout << "16진수:\t" << hex << i ;
		cout << "10진수:\t" << dec << i ;
		printf("\n");

	
	}
	return 0;
}
