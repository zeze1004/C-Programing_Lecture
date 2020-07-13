#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    FILE* fp;
    char binCharNum[20][18] = { 0, };
    int binIntNum[20][18] = { 0, };
    fopen_s(&fp, "data.txt", "r");
    if (fp == NULL) {
        printf("error\n");
        return 1;
    }

    for (int i = 0; i < 20; i++) {
        fscanf_s(fp, "%s", binCharNum[i]);
    }

    for (int i = 0; i < 20; i++) {
        binIntNum[i][0] = atoi(binCharNum[i]);
    }
    for (int i = 0; i < 20; i++) {
        cout << "(" << "i" << ") : ";
        for (int j = 0; j < 18; j++) {
            cout << binIntNum[i][j];
        }
    }

    fclose(fp);
    return 0;
}
