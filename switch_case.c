//switch statement
#include<stdio.h>
void main()
{
int a=0,b=0,c=0;
int ch;
printf("Enter 2 numbers: ");
scanf("%d %d",&a, &b);
printf("%d %d" ,a,b);
printf("\nOperation: 1.+ 2. - 3.* 4./ 5.%: ");
scanf("%d",&ch);
switch(ch)
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
}