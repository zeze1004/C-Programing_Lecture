/*
printf("3<1 = %d, 3>1 = %d \n", 3<1, 3>1); 
printf("3==1 = %d, 3!=1 = %d \n", 3==1, 3!=1);
3과 1을 크기를 비교하는 logical expression equation 값을 
decimal 값으로 표시하여라
위 문제를 변수를 a,b 이용하여 표시하라
*/

#include <iostream>

int main()
{
	int a, b;
	scanf("%d %d", &a, &b);
	printf("a<b = %d, a>b = %d \n", a < b, a > b);
	printf("b==a = %d, b!=a = %d \n", b == a, b != a);
	printf("a=b -> a = %d\n", a = b);
	return 0;
}