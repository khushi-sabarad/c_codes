//odd and even numbers
#include <stdio.h>
void main()
{
int a[50],i,n;
printf("Array size? ");
scanf("%d", &n);
printf("Enter the numbers: ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("Even numbers: ");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
printf("%d ",a[i]);
}
printf("\nOdd numbers: ");
for(i=0;i<n;i++)

{
if(a[i]%2!=0)
printf("%d ",a[i]);
}
}