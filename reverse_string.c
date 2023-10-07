//string in reverse order
#include<stdio.h>
void main()
{
char s[100], c,s1[20];
int x=0, l=0;
printf("Enter a sentence\n");
gets(s);
for(int j=0; s[j]!='\0'; j++)
{
l++;
}
for(int i=0; i<=l;i++)
{
c=s[i];

s1[x]=c;
x++;
if(c==' '||c=='\0')
{
for(int k=x-1;k>=0;k--)
{
printf("%c",s1[k]);
}
x=0;
printf(" ");
}
}
}