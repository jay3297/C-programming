#include<stdio.h>

void main()
{
    int subject1;
    int subject2;
    int subject3;

    printf("\n enter the marks of subject1 :");
    scanf("%d",&subject1);
    printf("\n enter the marks of subject2 :");
    scanf("%d",&subject2);
    printf("\n enter the marks of subject3 :");
    scanf("%d",&subject3);
    
    if(subject1 <=40 || subject2<=40 || subject3<=40)
    {
        printf("\n sorry you are fail");
    }
    else{
        int sum = subject1 + subject2 + subject3;
    printf("\n sum of 3 subject : %d",sum);
    float result = sum/100*100;
    printf("\n print percentage : %0.2f",result);

    }
}