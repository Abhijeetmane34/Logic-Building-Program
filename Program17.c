#include<stdio.h>
void Display(int iValue)

{
    int iCnt= 0;

    for( iCnt = 1 ; iCnt <= iValue; iCnt++ )

    printf("Jay Ganesh ...\n");

}
int main()
{
    int iNo1 =0;

    printf("Enter the number of iterations : \n");
    scanf("%d",&iNo1);
    Display(iNo1);
}