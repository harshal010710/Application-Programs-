#include <stdio.h>

int Maximum(int iValue1, int iValue2)
{
    if(iValue1 > iValue2)
    {
        return iValue1;
    }
    else
    {
        return iValue2;
    }

}

int main()
{
    auto int iValue1 = 0, iValue2 = 0, iRet = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter Second number : \n");
    scanf("%d",&iValue2);

    iRet = Maximum(iValue1,iValue2);

    printf("Largest number is : %d\n",iRet);

    return 0;
}