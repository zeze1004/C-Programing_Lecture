#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cstring>

int main()
{
	FILE* fp = fopen("name.txt", "r");
	FILE* fpname = fopen("aban.txt", "w");

	int random = 0;
	int i = 0;
	char name[500] = { 0, }; //2차원 배열로 출력할려면 반복문에 n[i]로
	srand(time(NULL));
	while(EOF != fscanf(fp, "%s", name))
	/*
	while (feof(fp) == NULL) 
	마지막 줄 읽고 NULL이 반환되지 않아 반복문 한 번 더 실행하고 마지막 읽었던거 출력하고 끝난다.
	*/
	{	
		fscanf(fp, "%s", name); // 0x2C 	
		random = rand()%(8978+1-3451) + 3451;	// 3451~8978	
		printf("[%d] 학번:%d %s\n", i+1, random, name);
		fprintf(fpname, "[%2d] 학번: %2d  %s\n", i+1, random, name);
		i++;
	}	
	fclose(fp);	
	fclose(fpname);
	
	return 0;
}