/*
0,1 말고, true, false 로 화면에 나타내어라
*/

#include <iostream>
using namespace std;
/*
bool x = true;
printf("%d\n", x); // 1출력

// true나 false를 출력하려면 다음 중 아무거나
printf(x ? "true" : "false");
//또는
printf("%s", x ? "true" : "false");
//또는
fputs(x ? "true" : "false", stdout);
*/
int main()
{
	bool b1, b2, b3, b4, b5, b6, b7, b8, b9;
	b1 = 3 > 1;
	b2 = true;
	b3 = 1;
	b4 = 3;
	b5 = 3 < 1;
	b6 = false;
	b7 = 0;
	b8 = 5 == 2;
	cout << boolalpha<<b1 << endl << b2 << endl << b3 << endl << b4 << endl << b5 << endl << b6 << endl << b7 << endl << b8 << endl;

	return 0;
}