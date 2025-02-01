#include<stdio.h>
void main()
{
    int arr[10]={10,20,30,40,50,60,70,80,90,100};
    int sum = 0;
    for (int i =0;i<=9;i++)
    {    
        sum =sum+arr[i];
    }
    printf("\n sum of an array %d",sum);

    
}