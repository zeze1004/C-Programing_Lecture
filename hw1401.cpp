#include <iostream>
#include <string.h>
#include <stdlib.h>


int main()
{
	FILE* fp = fopen("poem.txt", "r");
	if (fp == 0)
	{
		printf("error");
		return -1;
	}
	char fnam[33] = { "poem.txt" };
	char neyong[2000];
	char temp[2000] ;
	int geasu1, geasu2,i;
	
	fread(neyong, 1000, 1, fp);
	geasu1 = sizeof(neyong);
	geasu2 = strlen(neyong);
	printf("%d VS %d", geasu1, geasu2);
	char output[2000];
	int b = 0;
	while (neyong[b] ! = '\0')
	{
		b++;
		for (int num = 0; num < geasu2 / 2; num++)
		{
			output[i] = neyong[i];
		}
		i++;
	}


	fclose(fp);
	return 0;


	//utf-8 아니면 읽을 수 없다
}