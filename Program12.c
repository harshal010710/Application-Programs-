#include <stdio.h>

float Calculate_Percentage(int iMarks, int iTotal)
{
    auto float fPercentage = 0.0f;

    if((iMarks < 0) || (iTotal < 0) || (iMarks > iTotal))
    {
        printf("Invalid input\n");
        return fPercentage;
    }

    fPercentage = (((float)iMarks / (float)iTotal) * 100 );

    return fPercentage;
}

int main()
{
    auto int iValue1 = 0;
    auto int iValue2 = 0;
    auto float fRet = 0.0f;

    printf("Enter total Marks: \n");
    scanf("%d",&iValue2);

    printf("Enter the marks : \n");
    scanf("%d",&iValue1);

    fRet = Calculate_Percentage(iValue1, iValue2);

    printf("Percentage is : %f\n",fRet);

    return 0;
}