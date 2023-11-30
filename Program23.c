#include <stdio.h>

void Display(int iNo)
{
    int iCnt = 0;

    for(iCnt = 1; iCnt <= iNo; iCnt++)
    {
        printf("*\t");
    }

}

int main()
{
    int iVal = 0;

    printf("Enter the numbers of times : \n");
    scanf("%d",&iVal);

    Display(iVal);

    return 0;
}