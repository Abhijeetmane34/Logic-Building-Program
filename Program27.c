#include<stdio.h>


int Summation()
{
    int iNo1 = 1;
    int iNo2 = 2;
    int iNo3 = 3;
    int iNo4 = 4;
    int iNo5 = 5;
    int iSum = 0;

    iSum = iSum + 1;    
    iSum = iSum + 2;     
    iSum = iSum + 3;     
    iSum = iSum + 4;     
    iSum = iSum + 5;    

    return iSum;
}

int main()
{
    int iRet = 0;

    iRet = Summation();

    printf("Summation is : %d\n",iRet);

    return 0;
}