#include<stdio.h>

int Sumfactors(int iNo)
{
    int iCnt = 0;
    int iSum = 0;

    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            iSum = iSum + iCnt ;
        }
        
       
    }
     return iSum;
}
int main()
{
    int iValue = 0; int iRet = 0 ;

    printf("Enter The Number :-");
    scanf("%d",&iValue);

    // iRet = Sumfactors;
   // Sumfactors(iValue);
    iRet = Sumfactors(iValue);
    printf("Factor Addition is %d\n",iRet);

    return 0;
} 


