#include <stdio.h>
 
float Average(int iNo1, int iNo2, int iNo3)
{
    auto float fAve = 0.0;

    fAve = ((float)(iNo1 + iNo2 + iNo3)) / 3;

    return fAve;
}

int main()
{
    auto int iNo1 = 0, iNo2 = 0, iNo3 = 0;

    auto float fRet = 0.0;

    printf("Enter first number : \n");
    scanf("%d",&iNo1);

    printf("Enter Second number : \n");
    scanf("%d",&iNo2);

    printf("Enter Third number : \n");
    scanf("%d",&iNo3);

    fRet = Average(iNo1,iNo2,iNo3);

    printf("Averege is : %f\n",fRet);

    return 0;
}