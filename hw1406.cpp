/*
싯귀 text 속에 단어 char daneo[30]; 를 
fscanf(fp, "...", daneo); 읽어들여   화면에 번호 붙여, 
단어길이 dlen=strlen(daneo);포함 
printf("(%d) ....\n", i, daneo, dlen); 표시하여라
*/

#include <iostream>

int main()
{
	FILE* fp = fopen("poem.txt", "r");
	
	char daneo[1024]={ 0, };
	
	int  i = 0;
	while (feof(fp) == NULL)
	{
		fscanf(fp, "%s", &daneo);
		printf("%d번째: %s\n", i, daneo);
		i++;
	}
	
	return 0;
}