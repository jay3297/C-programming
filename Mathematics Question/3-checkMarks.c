#include<stdio.h>

void main()
{
    float subject1,subject2,subject3;
    printf("\n enter the marks of subject1 :");
    scanf("%f",&subject1);
    printf("\n enter the marks of subject2 :");
    scanf("%f",&subject2);
    printf("\n enter the marks of subject3 :");
    scanf("%f",&subject3);
    
    if(subject1 <=40 || subject2<=40 || subject3<=40)
    {
        printf("\n sorry you are fail");
    }
    else{
        float sum = subject1 + subject2 + subject3;
    printf("\n sum of 3 subject : %0.2f",sum);
    float result = (sum/300)*100;
    printf("\n print percentage : %0.2f",result);
    // printf("\n sum of total %d",sum/300);

    }
}