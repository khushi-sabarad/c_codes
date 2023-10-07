// 2.WAP to read info of 20 books and print book and author names of those whose price is more than Rs.1000

#include<stdio.h>
struct books
{
char title[50];
char author[50];
float price;
};
void main()
{
struct books book[20];
int i;
for(i=0;i<20;i++)
{
printf("Book %d\n",i+1);
printf("Title: ");
scanf("%s",(book[i].title));
printf("Author: ");
scanf("%s",(book[i].author));

printf("Price:Rs ");
scanf("%f",&(book[i].price));
printf("\n");
}
for(i=0;i<20;i++)
{
if(book[i].price>1000)
{
printf("Title: %s\n",book[i].title);
printf("Author: %s\n",book[i].author);
printf("\n");
}
}
}