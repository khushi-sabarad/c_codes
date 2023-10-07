//string inbuilt functions
#include<stdio.h>
#include<string.h>
void main()
{
char c1[]="Welcome";
char c2[]="Hello";
int i,j,k;
i=strcmp(c1,"Welcome");
j=strcmp(c1,c2);
k=strcmp(c1,"Hello");
printf("c1=Welcome, c2=Hello\n");
printf("COMPARED: %d %d %d \n",i,j,k);
printf("CONCATENATE: %s \n\n",strcat(c1,c2));
char s1[]="Hi Hola";
char s2[]="Hey Hello Hi";
printf("s1=Hi Hola, s2=Hey Hello Hi\n");
printf("LENGTH 1: %d \n", strlen(s1));
printf("LENGTH 2: %d \n", strlen(s2));
char* d=strdup(s1);
printf("DUPLICATE: %s \n",d);
printf("STRING CHARACTER: %s \n", strchr(s1,'o'));
printf("STRING STRING: %s \n", strstr(s2,"Hello"));
//printf("LOWER %s \n",strlwr(s1)); //doesnt work in kali

//printf("UPPER %s \n",strupr(s2)); //doesnt work in kali
//printf("REVERSE %s \n",strrev(s1)); //doesnt work in kali
}