#include<stdio.h>
void main()
{
int square(int);
int n;
printf("\nEnter N'th Value : ");
scanf("%d", &n);
printf("\nThe Result is : %d.", square(n));
}
int square(int x)
{
int a, b;
if(x == 0) return 0;
if(x == 1) return 1;
a = x - 1;
b = x * x + square(a);
return(b);
}