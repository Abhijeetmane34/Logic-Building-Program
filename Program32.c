#include<stdio.h>

void Displayfactors(int iNo)
{
    int iCnt = 0;

    printf("FACTORS ARE :-\n");
    for(iCnt = 1 ; iCnt <= (iNo/2) ; iCnt++)
    {
        if((iNo % iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
        
    }
}
int main()
{
    int iValue = 0;

    printf("Enter The Number :-");
    scanf("%d",&iValue);

    Displayfactors(iValue);

    return 0;
} 