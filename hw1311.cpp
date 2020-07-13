/*
엑셀 abanex.xls 내용을 csv (comma separated variable) 파일 
abancsv.csv 파일로 변환 저장시켜라  abancsv.csv 파일을 
fread(neyong, jasu, 1, fpcsv);  화면에 printf("",neyong ); 표시하여라
*/

#include <iostream>

int main()
{
	FILE* fpcsv = fopen("abannew.csv", "r");
	char neyong[100] = { 0, };
	int jasu = 4;
	fread(neyong, 1000, 1, fpcsv);
	printf("%s", neyong);

	return 0;
}