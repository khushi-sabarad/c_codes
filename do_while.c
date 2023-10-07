//do while loop
#include<stdio.h>
void main()
{
int a,b,c,op;
char ch;
do
{
printf("Enter 2 numbers: ");
scanf("%d %d",&a, &b);
printf("\nOperation: 1.+ 2. - 3.* 4./ 5.%: ");
scanf("%d",&op);
switch(op)
{
case 1:
{
c = a+b;
printf("SUM: %d",c);
break;
}
case 2:
{
c=a-b;
printf("DIFFERENCE: %d",c);
break;
}
case 3:

{
c=a*b;
printf("PRODUCT: %d",c);
break;
}
case 4:
{
c=a/b;
printf("QUOTIENT: %d",c);
break;
}
case 5:
{
c=a%b;
printf("REMAINDER: %d",c);
break;
}
default:
printf("Invalid option");

}
printf("\n Do you want to continue? ");
scanf("%s",&ch);
}
while(ch=='y'|| ch=='Y');
}