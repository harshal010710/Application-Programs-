#include <stdio.h>
#include <stdbool.h>

void DisplayFactor(int iNo1)
{
    auto int iCnt = 0;

    printf("Factors of %d are : \n",iNo1);

    for(iCnt = 1 ; iCnt < iNo1 ; iCnt++)
    {
        if((iNo1 % iCnt) == 0)
            printf("%d\n",iCnt);
    }  
}

int main()
{
    int iValue1 = 0, iRet = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iValue1);

    DisplayFactor(iValue1);

    return 0;
}