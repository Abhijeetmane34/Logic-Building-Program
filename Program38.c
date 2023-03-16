//accept number from user and display the Table of that number
#include<stdio.h>
void Table(int iNo)
{
    int iCnt = 0;
    printf("______________________________\n");
    printf("Table of  %d is\n",iNo);
    printf("_________________________________\n");

    for(iCnt=1; iCnt<=10; iCnt++)
    {
        printf(" %d\n",iNo * iCnt);
    }
    printf("_________________________________");
}
int main()
{
    int iValue = 0 ,iRet = 0;

    printf("Enter the Table Number:");
    scanf("%d",&iValue);

     Table(iValue);


    return 0;
}