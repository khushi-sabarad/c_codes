/* 1. WAP to create a structure called traveler and members of structure are train no, coach no,
seat no, source, destination, gender, age, name and departure date. */

#include<stdio.h>
struct traveller
{
int train_no;
char coach[4];
int seat_no;
char source[50];
char destination[50];
char gender[10];
int age;
char name[50];
char date[15];
};
int main()
{
struct traveller x;
printf("Enter the name of the traveller \n");
scanf("%s",&x.name);
printf("Enter the age \n");
scanf("%d",&x.age);
printf("Enter the gender\n");
scanf("%s",&x.gender);
printf("Enter the date \n");
scanf("%s",&x.date);
printf("Enter the Source \n");
scanf("%s",&x.source);
printf("Enter the Destination\n");
scanf("%s",&x.destination);

printf("Enter the train number \n");
scanf("%i",&x.train_no);
printf("Enter the coach number \n");
scanf("%s",&x.coach);
printf("Enter the seat number \n");
scanf("%i",&x.seat_no);
printf("Name : %s\n",x.name);
printf("Age : %i\n",x.age);
printf("Gender : %s\n",x.gender);
printf("Date : %s\n",x.date);
printf("Source : %s\n",x.source);
printf("Destination : %s\n",x.destination);
printf("Train Number : %i\n",x.train_no);
printf("Coach Number : %s\n",x.coach);
printf("Seat Number : %d\n",x.seat_no);
return 0;
}