#include <stdio.h>

long int Cube(int iValue)
{
    auto long int iCube = 0;

    iCube = iValue * iValue * iValue;

    return iCube;
}

int main()
{
    auto int iNum = 0;
    auto long int iCube = 0;

    printf("Enter the Number : \n");
    scanf("%d",&iNum);

    iCube = Cube(iNum);

    printf("Cube of the number : %ld\n",iCube);

    return 0;
}