//calculator prog 1
#include<stdio.h>
int add(int a, int b)
{
int c;
c=a+b;
return c;
}
int subtract(int a, int b)
{
int c;
c=a-b;
return c;
}
int multiply(int a, int b)
{
int c;
c=a*b;
return c;
}
int divide(int a, int b)
{
int c;
c=a/b;
return c;
}
int modulus(int a, int b)
{
int c;
c=a%b;

return c;
}
void main()
{
int x,y,s,d,p,q,m;
printf("Enter 2 values: ");
scanf("%d %d",&x,&y);
s=add(x,y);
printf("SUM: %d",s);
d=subtract(x,y);
printf("\n DIFFERENCE: %d",d);
p=multiply(x,y);
printf("\n PRODUCT: %d",p);
q=divide(x,y);
printf("\n QUOTIENT: %d",q);
m=modulus(x,y);
printf("\n REMAINDER: %d",m);
}