#include<stdio.h>
void main()
{
    char arr[20]="kuldeepsinhjhala";
    int count =0;
   for(int i=0;i<=20;i++)
   {
    if(arr[i]=='a'||arr[i]=='e'||arr[i]=='i'||arr[i]=='o'||arr[i]=='u')
    {
        printf("\n it is vowels %c",arr[i]);
        count++;
    }
    
   }
   printf("\n total vowel in this string is :%d",count);
}