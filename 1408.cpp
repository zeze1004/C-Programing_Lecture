#include <iostream>
#include <string.h>
int main()
{
	FILE* fp = fopen("poem.txt", "r");
	int result;
	char daneo[30];
	int i = 0;
	while (feof(fp) == NULL)
	{
		result = fscanf(fp, "%s", daneo);
		printf("%d %s\n", i,daneo);
		i ++ ;
	}


	return 0;
}