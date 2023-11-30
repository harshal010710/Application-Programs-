#include <stdio.h>

void ExamTime(int iStanderd)
{
    switch (iStanderd)
    {
        case 1:
            printf("Exam is at 8 AM\n");
            break;

        case 2:
            printf("Exam is at 9 AM\n");
            break;

        case 3:
            printf("Exam is at 10 AM\n");
            break;

        case 4:
            printf("Exam is at 11 AM\n");
            break;

        case 5:
            printf("Exam is at 12 AM\n");
            break;

        default:
            printf("Wrong Input\n");
            break;
    }
}   

int main()
{
    auto int iStanderd = 0;

    printf("Enter your Standerd : ");
    scanf("%d",&iStanderd);

    ExamTime(iStanderd);

    return 0;
}