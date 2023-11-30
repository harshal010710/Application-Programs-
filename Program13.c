#include <stdio.h>

void Display(int iPercentage)
{
    if((iPercentage < 0) || (iPercentage > 100))
    {
        printf("Invalid Input \n");
        return;
    }

    if((iPercentage < 35) && (iPercentage >= 0))
    {
        printf("Fail\n");
    }
    else if((iPercentage>=35) && (iPercentage<50))
    {
        printf("Pass class\n");
    }
    else if((iPercentage>=50) && (iPercentage<60))
    {
        printf("Second class class\n");
    }
    else if((iPercentage>=60) && (iPercentage<75))
    {
        printf("First class\n");
    }
    else if((iPercentage>75) && (iPercentage <= 100))
    {
        printf("First class with Distinction\n");
    }
}

int main()
{
    auto int iPercentage = 0;

    printf("Enter the percentage : \n");
    scanf("%d",&iPercentage);

    printf("Result is : ");
    Display(iPercentage);

    return 0;
}