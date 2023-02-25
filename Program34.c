#include<stdio.h>
#include<stdbool.h>


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
bool Checkperfect(int iData)
{
    int iAns = 0;
    iAns = Sumfactors(iData);
    if(iAns == iData)
    {
        return true;
    }
    else
    {
        return false;
    }
    
}
int main()
{
    int iValue = 0; 
    bool bRet= false;
    printf("Enter The Number :-");
    scanf("%d",&iValue);

    bRet = Checkperfect(iValue);
    
    if(bRet == true)
    {
        printf("%d is a perfect number",iValue);

    }
    else
    {
         printf("%d is not a perfect number",iValue);
    }
   /// printf("Factor Addition is %d\n",iRet);
return 0;
}