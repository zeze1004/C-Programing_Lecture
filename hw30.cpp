/*
 정수 4개 int j1,j2,j3,j4; (35-75 범위 사이)를 
 keyboard 차례로 scanf() 읽어서 
 총 4개 수를 차례 연번 (serial number) 붙여서, 
printf() 화면 4줄 표시하고, jeongsu.txt에 fprintf() 4줄에 저장하여라
*/

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    int arr[50];
    FILE* fp = fopen("data.txt", "wt");

    for (int i = 0; i < 4; i++)
    {
        aa:
        printf("35-75사이 정수를 입력하시오:\n");
        scanf_s("%d",&arr[i]);
        if (arr[i] < 35 || arr[i]>75) {
            printf("다시 입력하시오: \n");
            goto aa;
        }
        //printf("[%d] %d\n", i+1, arr[i]);
    }
    for (int j = 0; j < 4; j++)
    {
        printf("[%d] %d\n", j + 1, arr[j]);
        fprintf(fp,"[%d] %d\n", j + 1, arr[j]);
    }
    fclose;
    return 0;
}