/*
printf("3==1, %d, False = %d,  %d \n", 3==1, false, 0); printf("3>=1, %d, true = %d,  %d \n", 3>=1, true, 1);  
3<1, flase, 0  값을 decimal 값으로, 3>1, true, 1  값을 
decimal 값으로 화면에 표시하라.
*/

#include <iostream>
#include <stdbool.h>
using namespace std;
int main()
{
	printf("3==1, %d, False = %d,  %d \n", 3 == 1, false, 0); 
	printf("3>=1, %d, true = %d,  %d \n", 3 >= 1, true, 1);
	return 0;
}