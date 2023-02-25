#include<stdio.h>
void Display(int iNo1)
{
    int iCnt =0;
    for(iCnt = 1; iCnt<=iNo1; iCnt++)
    {
        printf("Marvellos : %d\n",iCnt);
    }
}
int main()
{
    int iNo1 = 0;
    printf("ENTER NO OF ITERARIONS : \n");
    scanf("%d",&iNo1);
    Display(iNo1);

    return 0;
}