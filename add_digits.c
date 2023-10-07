//To add first and last digit of the three digit number
#include<stdio.h>
void main()
{
int n, a, b;
printf("Enter a three digit number: ");
scanf("%d",&n);
a = n%10;
b= n/100;
printf("The added value of first and last digit is: %d", a+b);
}