//for loop
#include<stdio.h>
void main()
{
int num,count,sum=0;
printf("Enter a number:");
scanf("%d",&num);
for(count=1;count<=num;count++)
sum=sum+count;
printf("Sum= %d",sum);
}