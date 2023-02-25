#include<stdio.h>
void Display(int iValue)

{
    int iCnt= 0;

    iCnt = 1; //1
    while(iCnt <= iValue)          //2
    {
    printf("Jay Ganesh ...\n");     //4
    iCnt++;     //3
    }
}
int main()
{

    int iNo1 = 0;

    printf("Enter Numbers of iteration :-");
    scanf("%d",&iNo1);

    Display(iNo1);

    return 0 ;
}