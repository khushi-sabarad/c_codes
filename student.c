//student marks n roll
#include<stdio.h>
void main()
{
int roll[10],x,i;
float marks[10];
printf("Roll numbers: ");
for(i=0;i<10;i++)
scanf("%d",&roll[i]);
printf("\nMarks obtained: ");
for(i=0;i<10;i++)
scanf("%f",&marks[i]);

printf("\nROLL NUMBER? ");
scanf("%d",&x);
for(i=0;i<10 && roll[i] != x;i++);
if(x==roll[i])
printf("\nMARKS:%.2f ",marks[i]);
}