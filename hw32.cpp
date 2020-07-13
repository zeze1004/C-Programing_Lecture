/*
실수 소수 2자리의 실수 총4개 r1,r2,*rp3,*rp4 (2.31~9.77 사이 범위)를
 일반 실수 2개, pointer 실수 2개 총 4개 실수 등을 keyboard 차례로 scanf() 읽어서 
 총 4개 수를 차례 연번 (serial number) 붙여 
 printf() 화면표시하고, silsu.txt에 fprintf() 4줄에 저장
*/

#include <stdio.h>

int main()
{
    float r1, r2,r3,r4;
    float* rp3, * rp4;
    rp3 = &r3; //포인터 변수 초기화
    rp4 = &r4; //포인터 변수 초기화

    FILE* fp = fopen("data.txt", "wt");
/*
 one:
    printf("2.31~9.77 사이 실수 입력하시오: \n");
    scanf("%f", &r1);
    if (r1 < 2.31 || r1>9.77)
    {
        printf("다시 입력하시오: \n");
        goto one;
    }

two:
    printf("2.31~9.77 사이 실수 입력하시오: \n");
    scanf("%f", &r2);
    if (r2 < 2.31 || r2>9.77)
    {
        printf("다시 입력하시오: \n");
        goto two;
    }

three:
    printf("2.31~9.77 사이 실수 입력하시오: \n");
    scanf("%f", rp3);
    if (*rp3 < 2.31 || *rp3>9.77)
    {
        printf("다시 입력하시오: \n");
        goto three;
    }

four:
    printf("2.31~9.77 사이 실수 입력하시오: \n");
    scanf("%f", rp4);
    if (*rp4 < 2.31 || *rp4>9.77)
    {
        printf("다시 입력하시오: \n");
        goto four;
    }

    printf("[1] %f 주소: %d\n", r1,&r1);
    printf("[2] %f 주소: %d\n", r2,&r2);
    printf("[3] %f 주소: %d\n", *rp3,rp3);
    printf("[4] %f 주소: %d\n", *rp4,rp4);

    fprintf(fp, "[1] %f 주소: %d\n", r1, &r1);
    fprintf(fp, "[2] %f 주소: %d\n", r2, &r2);
    fprintf(fp, "[3] %f 주소: %d\n", *rp3, rp3);
    fprintf(fp, "[4] %f 주소: %d\n", *rp4, rp4);
    */
    float num,arr[50];
    for (int i = 0; i < 4; i++)
    {
        aa:
        printf("2.31~9.77 사이 실수 입력하시오: \n");
        scanf("%f", &num);
        if (num < 2.31 || num>9.77)
        {
            printf("다시 입력하시오: \n");
            goto aa;
        }
        arr[i] = num;
        
    }
    for (int j = 0; j < 4;j++)
    {
        printf("[arr %d] %f\n", j+1,arr[j]);
    }
    r1 = arr[0];
    printf("r1: %f 주소: %d \n", r1,&r1);
    r2 = arr[1];
    printf("r2: %f 주소: %d\n", r2,&r2);
    rp3 = &arr[2];  
    *rp4 = arr[3];

    printf("&arr[2]= %d\n",&arr[2]);
    printf("&arr[3]= %d\n\n", &arr[3]);
    printf("\nrp3 = &arr[2]\n");

    printf("r3: %f    *rp3: %f  rp3주소: %d r3주소: %d  \n", r3,*rp3,rp3,&r3);
    //rp3: -107374176.000000 *rp3: 4.300000  주소: 9697152
    
    printf("\n*rp4 = arr[3]\n");
    printf("r4: %f    *rp4: %f  rp4주소: %d   r4주소: %d\n", r4,*rp4,rp4,&r4);

    


    return 0;
}