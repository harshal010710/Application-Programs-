#include <stdio.h>
 
int Maximum(int iNo1, int iNo2, int iNo3)
{
    if(iNo1 >= iNo2 && iNo1 >= iNo3)
    {
        return iNo1;
    }

    else if(iNo2 >= iNo3 && iNo2 >= iNo1)
    {
        return iNo2;
    }

    else
    {
        return iNo3;
    }
}

int main()
{
    auto int iNo1 = 0, iNo2 = 0, iNo3 = 0;

    auto int iGrt = 0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    printf("Enter Second number : \n");
    scanf("%d",&iNo2);

    printf("Enter Third number : \n");
    scanf("%d",&iNo3);

    iGrt = Maximum(iNo1,iNo2,iNo3);

    printf("Maximum  is : %d\n",iGrt);

    return 0;
}