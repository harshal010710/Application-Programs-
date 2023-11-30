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

//Addition is a function which accepts 2 parameters as integer and it returns integer

int Addition(int iNo1,int iNo2)
{
    int iSum = 0;
    iSum = iNo1 + iNo2;
    return iSum;
}

int main()
{
    int iValue1 = 0 , iValue2 = 0 , iAns = 0;

    printf("Enter first number : \n");
    scanf("%d",&iValue1);

    printf("Enter first number : \n");
    scanf("%d",&iValue2);

    iAns = Addition(iValue1, iValue2);

    printf("Addition is : %d\n",iAns);
    return 0;
}

// Step 5 : Test the code

/*
    Test Case 1 : 
    Input : 10 11
    Output : 21

    Test Case 2 : 
    Input : 10 0
    Output : 10

    Test Case 3 : 
    Input : 12 -6
    Output : 6

    Test Case 4 : 
    Input : -6 -5
    Output : -11
*/