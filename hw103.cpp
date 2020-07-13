/*
bool 변수 b1, b2, b3, b4...b8  값을 decimal 값으로 
화면에 cout<< 표시하라.  b1=3>1; b2=true; b3=1; b4=3; 
b5=3<1; b6=flase; b7=0; b8=5==2;
*/

#include <iostream>
using namespace std;

int main()
{
	bool b1, b2, b3, b4, b5, b6, b7, b8,b9;
	b1 = 3 > 1;
	b2 = true;
	b3 = 1;
	b4 = 3;
	b5 = 3 < 1;
	b6 = false;
	b7 = 0;
	b8 = 5 == 2;
	cout << b1<< endl << b2<< endl << b3<< endl << b4<< endl << b5<< endl << b6 << endl << b7 << endl << b8 << endl;
	b9 = 4;
	printf("b9 = %d\n", b9);
}