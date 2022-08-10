#include<stdio.h>
int SumOdd(int num1, int num2)
{
   if(num1>num2)
    return 0;
return num1+SumOdd(num1+2,num2);
}
int main()
{
    int num1=1,num2;
    printf("Enter your Limit:");
    scanf("%d",&num2);
    printf("Sum of all odd numbers in the given range is: %d",SumOdd(num1,num2));
}