//Display even Factors

#include<stdio.h>
void DisplayEvenfactors(int iNo)
{
    int iCnt = 0;
    for(iCnt=1; iCnt<=(iNo/2); iCnt++)
    {
        if((iNo % iCnt == 0) && (iNo % 2 == 0))
        {
            printf("%d",iCnt);
        }
    }

}
int main()
{
    int iValue = 0;

    printf("Enter the number\n");
    scanf("%d",&iValue);

    DisplayEvenfactors(iValue);

    return 0;
}