#include<stdio.h>
#include<conio.h>

int factorial(int);
int factorial(int n)
{
    // int fact;
    if (n>=1)
    {
        return n*factorial(n-1);
    }
    else
    {
        return 1;
    }
    
}
int main()
{
    int n;
    printf("Enter a number:-\n");
    scanf("%d",&n);
    printf("Factorial:- %d = %ld",n,factorial(n));
    return 0;
}