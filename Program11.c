#include <stdio.h>
#include <stdbool.h>

bool Check_even(int iValue)
{
    if(iValue % 2 == 0)
        return 1;

    else
        return 0;
}

int main()
{
    auto int iNum = 0;
    bool bRes = false;

    printf("Enter the number : \n");
    scanf("%d",&iNum);

    bRes = Check_even(iNum);

    if(bRes)
        printf("%d is even \n",iNum);

    else
        printf("%d is odd\n",iNum);

    return 0;
}