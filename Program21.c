#include <stdio.h>

void Display(int iNo)
{
    auto int iCnt = 0;

    for ( iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("%d Jay Ganesh...\n",iCnt);
    }
}

int main()
{
    auto int iCnt = 0;

    printf("Enter the nummber of times you want to Disaply : ");
    scanf("%d",&iCnt);

    Display(iCnt);
    
    return 0;
}