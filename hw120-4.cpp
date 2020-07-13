/*
위 저장된 aban02.txt 읽어 들여 
3)Math 점수 random 24점이상 89점 사이 부여, 
화면에 표시하고 aban03.txt 새로 저장하라
*/

#include <iostream>
#include <time.h>
#include <cstdlib>
#include <cstring>

int main()
{
	FILE* fp = fopen("output.txt", "r");
	FILE* fpname = fopen("output2.txt", "w");

	int random=0;
	int i = 0;
	char name[500] = { 0, }; //2차원 배열로 출력할려면 반복문에 n[i]로
	char chr;
	srand(time(NULL));
	while (feof(fp)==0)
	{
		//fscanf(fp, "%s", name); // 0x2C 	
		random = rand() % (89 + 1 - 24) + 24; //24점이상 89점 사이
		fgets(name, sizeof(name), fp);
		printf("수학:%d  %2s ", random, name);
		fprintf(fpname, "수학:%d  %s ", random, name);
		i++;
	}

	rewind(fp);
	fclose(fp);
	fclose(fpname);

	return 0;
}