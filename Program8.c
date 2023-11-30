// Problem Statement : Accept Radius from user and calculate the Area of circle

// Step1 : Understand the problem statement
// conclusion :We are going to use formula as PI*R*R

// Step 2 : Algorithm
/*
    START
        Accespt radius from user and store into Radius
        Create variable as PI and store value 3.14
        Calculate area PI * RADIUS * RADIUS
        Display area PI * RADIUS * RADIUS
*/

#include <stdio.h>

//////////////////////////////////////////////////////////////////////
//   
// Function Name :  Area_of_circle
// Description :    It is used to calculate the area of circle
// Input :          Double
// Output :         Double
// Auther Name :    Harshal Devidas PAtil
// Date :           02/10/2023
// 
//////////////////////////////////////////////////////////////////////
double Area_of_circle(double dRadius)
{
    auto const float PI = 3.14;

    return PI * dRadius * dRadius;
}

///////////////////////////////////////////////////////////
// 
// Entry point function
// 
/////////////////////////////////////////////////////////// 
int main()
{
    auto double dRadius = 0.0;

    printf("Enter the radius of circle : \n");
    scanf("%lf",&dRadius);

    printf("Area of circle is : %lf\n",Area_of_circle(dRadius));

    return 0;
}