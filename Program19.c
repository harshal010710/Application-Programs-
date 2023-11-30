#include <stdio.h>

void Display(int iCount)
{
    auto int i = 0;

    for ( i = 0; i < iCount; i++)
    {
        printf("Jay Ganesh...\n");   
    }  
}

int main()
{
    auto int iCnt = 0;

    printf("Enter the nummber of times do you want to Disaply");
    scanf("%d",&iCnt);

    Display(iCnt);
    return 0;
}