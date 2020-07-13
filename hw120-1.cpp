#include <string.h>
#include <iostream>
#include <cstring>
using namespace std;


int main()
{
	FILE* fp = fopen("data.txt", "r");
	FILE* fpname = fopen("name.txt", "w");
	char buffer[50][50] = { 0, };	
	char temp[50] = { 0, };

	int i = 0;
	int num;
	
	while (feof(fp) == NULL)
	{
		fscanf(fp, "%s", buffer[i]); // 0x2C 
	
		printf("[%2d] %2s \n", i + 1, buffer[i]);
		//fputs(buffer[i], fpname);
		i++;
		//num = i;
		
	}
	fclose(fp);
	fclose(fpname);

	return 0;
}
