/*
file 2개 jeongsu.txt, silsu.txt 속에 내용 전체를 FILE *jfp, *sfp; 이용하여
 fread() 각각 읽어서 내용 buffer[200] 를 화면에 표시하여라
*/

#include <stdio.h>
#include <string.h>

int main()
{
    char buffer[200] = { 0, };    // 문자열 데이터 4바이트 NULL 1바이트. 4 + 1 = 5
    int count = 0;
    int count2 = 0;
    int total = 0;

    FILE* fp1 = fopen("data.txt", "r");    // hello.txt 파일을 읽기 모드(r)로 열기.
                                           // 파일 포인터를 반환
    FILE* fp2 = fopen("data2.txt", "r");
    //while (feof(fp1) == 0)    // 파일 포인터가 파일의 끝이 아닐 때 계속 반복
    printf("fp1:\n");
    while (feof(fp1) == 0)
    {
        count = fread(buffer, sizeof(char), 4, fp1);    // 1바이트씩 4번(4바이트) 읽기
        printf("%s", buffer);                          // 읽은 내용 출력, buffer[i]는 출력 ㄴㄴ
        
        memset(buffer, 0, 5);                          // 버퍼를 0으로 초기화
        total += count;                                // 읽은 크기 누적

    }
    printf("\n");
    printf("fp2:\n");
    while (feof(fp2) == 0)
    {
        count2 = fread(buffer, sizeof(char), 4, fp2);
        printf("%s", buffer);
        memset(buffer, 0, 5);
        total += count2;
    }
    printf("\ntotal: %d\n", total);    // total:  파일을 읽은 전체 크기 출력

    fclose(fp1);    // 파일 포인터 닫기
    fclose(fp2);
    return 0;
}
