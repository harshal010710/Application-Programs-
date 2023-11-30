//Problem statement : Accept 2 values from user and perform the addition

//Step 1 : Understand the problem statement
//Conclusion : We have to accept 2 integers and perform its addiion

//step 2 : Write the algorithm

/*
    Start
        Accept first number from user and store it into no1
        Accept first number from user and store it into no1
        Create one variable of no1 and no2, store the result in Ans
        Display the result from Ans to the user
    Stop
*/

//Step 3 : Decide the programming language (C,C++,JAVA,PYTHON)
//We select C programming

// Step 4 : Write the program


#include <stdio.h>

int main()
{
    int a , b , k;

    printf("Enter the input : \n");
    scanf("%d",&a);
    scanf("%d",&b);

    k = a + b;

    printf("\nAddition is : %d\n",k);

    return 0;
}