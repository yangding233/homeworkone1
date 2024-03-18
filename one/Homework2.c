#include<stdio.h>
#include<stdlib.h>
int main()
{
    int a = 9;
    int b = 15;
    int c = 128;
    int d = 2048;
    int e = 9527;
    printf("Decimal Form:| char | int | long long | float | double |\n");
    printf("--------------------------------------------------------------------------\n");
    printf("Decimal Form:|   %d  |  %d  |     %d     |   %d   |   %d    |\n",sizeof(char),sizeof(int),sizeof(long long),sizeof(float),sizeof(double));
    system("pause");
    return 0;
}