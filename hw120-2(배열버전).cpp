#include <string>
#include <iostream>

int main()
{
	FILE* fp = fopen("data.txt", "r");
	char name[100];
	char chr;
	int num=0;
	while (feof(fp) == NULL)
	{
		chr = fgetc(fp); //fgetc는 return 값으로 받는다
		name[num] = chr;
		if (('a' <= name[num]) && (name[num] <= 'z') || ('A' <= name[num]) && (name[num] <= 'Z'))
			printf("%c", name[num]);

		if (name[num] == 32 || name[num] == ',' || name[num] == 10)	//32 띄어쓰기
			printf("%c", 10); //10 \n
		else if (name[num] == 32 && name[num] == ',')
			printf("%c", 10); //10 \n

	}


	return 0;
}
