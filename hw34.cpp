/*
file 2개 jeongsu.txt, silsu.txt 속에 내용 전체를 FILE *jfp, *sfp; 이용하여
char gulja 문자 단위로 모두  fgetc() 각각 읽어서 내용 모두를 읽어서 화면에 표시하여라
*/


#include <stdio.h>
#include <string.h>

int main()
{
    char gulja = NULL;    // 문자열 데이터 4바이트 NULL 1바이트. 4 + 1 = 5
    int count = 0;
    int count2 = 0;
    int total = 0;

    FILE* fp1 = fopen("data.txt", "r");    // hello.txt 파일을 읽기 모드(r)로 열기.
                                           // 파일 포인터를 반환
    FILE* fp2 = fopen("data2.txt", "r");
    //while (feof(fp1) == 0)    // 파일 포인터가 파일의 끝이 아닐 때 계속 반복
    printf("fp1:\n");
    while ((gulja = fgetc(fp1)) != EOF) //E0F 상수는 -1, 이는 파일의 끝을 의미한다. 파일의 끝이 아니면 출력
    {
        count++;
        putchar(gulja);
        //printf("%s", gulja);  //오류
        memset(&gulja, 0, 5);
        total = +count;

    }
    gulja = NULL;
    printf("\n");
    printf("fp2:\n");
    while ((gulja = fgetc(fp2)) != EOF)
    {
        count2++;
        
        putchar(gulja);
        memset(&gulja, 0, 5);
        total += count2;
    }
    printf("\ntotal: %d\n", total);    // total:  파일을 읽은 전체 크기 출력

    fclose(fp1);    // 파일 포인터 닫기
    fclose(fp2);
    return 0;
}
