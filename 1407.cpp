


/*
싯귀 text 속에 단어 char daneo[30]; 를
fscanf(fp, "...", daneo); 읽어들여   화면에 번호 붙여,
단어길이 dlen=strlen(daneo);포함
printf("(%d) ....\n", i, daneo, dlen); 표시하여라
*/

#include <iostream>
#include <string.h>

int main()
{
	FILE* fp = fopen("poem.txt", "r");

	char daneo[1024] = { 0, };
	int dlen;
	int  i = 0;
	while (feof(fp) == NULL)
	{
		fscanf(fp, "%s", &daneo);
		dlen = strlen(daneo);
		if (daneo[0] >= 'a' && daneo[0] <= 'z') { //daneo[0] 첫 글자만 비교
			//소문자면 대문자로 출력
			daneo[0] = daneo[0]-32; //32=97(small a)-65(large A)
			//대문자와 소문자 사이는 항상 32만큼 차이가 난다
		}
		printf("%d번째 len:%d : %s\n", i,dlen, daneo);
		i++;
	}

	return 0;
}