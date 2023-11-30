#include <stdio.h>
#include <stdbool.h>

_Bool CheckFactor(int iNo1, int iNo2)
{
    if((iNo1 % iNo2) == 0)
        return true;
        
    else
        return false;
}

int main()
{
    _Bool bRet = false;
    int iValue1 = 0, iValue2 = 0;

    printf("Enter Number 1 : \n");
    scanf("%d",&iValue1);

    printf("Enter Number 2 : \n");
    scanf("%d",&iValue2);

    bRet = CheckFactor(iValue1, iValue2);

    if(bRet == false)
        printf("%d is not a factor of %d\n",iValue2,iValue1);

    else
        printf("%d is a factor of %d\n",iValue2,iValue1);

    return 0;
}