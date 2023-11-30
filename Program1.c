#include <stdio.h>

int Addition(int a, int b)
{
    printf("JAY GANESH..\n\n\n");
    return (a+b);
}

int main()
{
    int a=0,b=0;

    printf("Enter the input : \n");
    scanf("%d",&a);
    scanf("%d",&b);

    printf("\nAddition is : %d\n",Addition(a,b));

    return 0;
}