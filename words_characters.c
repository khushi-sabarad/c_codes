//number of words and characters
#include<stdio.h>
#include<string.h>
void main()
{
char s[100],c;
int word=1;
printf("Line? ");
gets(s);
//scanf("%s\n",s);
for(int i=0;s[i]!='\0';i++)
{
if(s[i]==' ')
word++;
}
printf("Number of words:%d\n",word);
printf("Number of characters:%d\n",strlen(s));
}