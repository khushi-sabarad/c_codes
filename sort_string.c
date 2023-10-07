//string sorting
#include<stdio.h>
#include<string.h>
int main()
{
int i,j,n;
char a[25][25],temp[25];
printf("List size? ");
scanf("%d",&n);
puts("Elements? ");
for(i=0;i<=n;i++)
gets(a[i]);
for(i=0;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
if(strcmp(a[i],a[j])>0)
{
strcpy(temp,a[i]);
strcpy(a[i],a[j]);
strcpy(a[j],temp);
}

}
}
printf("\nSORTED:");
for(i=0;i<=n;i++)
puts(a[i]);
return 0;
}