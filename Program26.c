#include<stdio.h>


int Summation()
{
    int iNo1 = 1;
    int iNo2 = 2;
    int iNo3 = 3;
    int iNo4 = 4;
    int iNo5 = 5;
    int iSum = 0;

    iSum = iSum + iNo1;     //0+1
    iSum = iSum + iNo2;     //1+2
    iSum = iSum + iNo3;     //3+3
    iSum = iSum + iNo4;     //6+4
    iSum = iSum + iNo5;     //10+5

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Summation();

    printf("Summation is : %d\n",iRet);

    return 0;
}