//Display Non Factors Addition
//input:-5
//output:-9


#include<stdio.h>
int  SummationFactors(int iValue)
{
   int  iCnt = 0;
   int iSum = 0;
   
    for(iCnt =1; iCnt<=iValue ; iCnt++)
    
    {
        if((iValue % iCnt)!=0)
        {
            iSum = iSum + iCnt ;
        }
    }
    return iSum;
}

int main()
{
    int iNo = 0;
    int iRet = 0;

    printf("Enter The Number\n");
    scanf("%d",&iNo);

    iRet = SummationFactors(iNo);
    printf("Addition is %d",iRet);
    return 0;
}