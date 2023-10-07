//reverse
#include <stdio.h>
void main()
{
int a[50],i,n;
printf("Array size? ");
scanf("%d",&n);
printf("Enter the numbers: ");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("Reversed: ");
for(i=n-1;i>=0;i--)
{
printf("%d ",a[i]);
}
}