//unique elements
#include <stdio.h>
int main()
{
int n,i,f=0,j;
printf("Array size? ");
scanf("%d",&n);
int a[n];
printf("Array elements? ");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nUnique elements:");
for(i=0;i<n;i++)
{
f=0;
for(j=0;j<n;j++)
{
if(i!=j)
{
if(a[i]==a[j])
f++;
}
}
if(f!=1)
printf("%d ",a[i]);
}
}