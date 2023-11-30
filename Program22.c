#include <stdio.h>

void Display(int iVal)
{
    auto int iCnt = 0;

    for ( iCnt = 0; iCnt < iVal; iCnt++)
    {
        printf("Hello %d\n",iCnt);
    }

}

int main()
{


    return 0;
}