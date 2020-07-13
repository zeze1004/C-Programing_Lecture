/*
data file silsu01.txt 파일에 11.12 와 99.87 사이에 
소수점 이하 2자리 실수 값 4개 저장하라  
fscanf("", &sil1, &sil2); 읽어 들여서 sil1>sil2 이면 
cout<<"sil1 이 sil2 보다 더 크다"  sil1<sil2 이면 
cout<<"sil1 이 sil2 보다 더 적다"  sil1=sil2 이면 
cout<<"sil1 이 sil2 과 같다" 화면에 표시하라
*/

#include <iostream>
using namespace std;
int main()
{
	float sil1,sil2,sil3,sil4;
	float num[40] = { 0, };
	FILE* fp = fopen("data.txt", "r");
	/*
	for (int i = 0; i<10; i++)
	{
		fscanf(fp,"%f", &num[i]);
		printf("[%d] %f\n", i, num[i]);
		if (feof(fp))
			break;
	}
	
	sil1 = num[0];
	sil2 = num[1];
	sil3 = num[2];
	sil4 = num[3];
	*/
	/*
	sil1>sil2 이면 
cout<<"sil1 이 sil2 보다 더 크다"  sil1<sil2 이면 
cout<<"sil1 이 sil2 보다 더 적다"  sil1=sil2 이면 
cout<<"sil1 이 sil2 과 같다" 
	*/
	rewind(fp); // fp초기화
	fscanf(fp,"%f %f", &sil1, &sil2);
	fscanf(fp, "%f %f", &sil3, &sil4);
	printf("%.2f %.2f\n", sil1, sil2);
	if (sil1 > sil2)
	{
		cout << "sil1 이 sil2 보다 더 크다" << endl;
	}
	else if(sil1 == sil2)
		cout << "sil1 이 sil2 과 같다" << endl;

	else
		cout << "sil2 이 sil1 보다 더 크다" << endl;
	printf("%7.2f %7.3f\n", sil3, sil4); //%.2f 소수점 뒤 2까지만 출력 %7.2 : 7번째 칸 지정
	if (sil3 > sil4)
	{
		cout << "sil3 이 sil4 보다 더 크다" << endl;
	}
	else if (sil3 == sil4)
		cout << "sil3 이 sil4 과 같다" << endl;

	else
		cout << "sil3 이 sil4 보다 더 크다" << endl;
	fclose(fp);
	return 0;
}