//electricity prog 3
#include <stdio.h>
void main()
{
int units;
float amount;
printf("\n Enter the Units Consumed: ");
scanf("%d", &units);
if(units<101)
amount= units * 1.50;
else if(units>100 && units<301)
amount= (100*1.50)+(100*2)+(units-100)*2 ;
else if(units>300 && units<501)
amount= (100*1.50)+(100*2)+(100*2.50)+(units-300)*2.50 ;
else if(units>500)
amount= (100*1.50)+(100*2)+(100*2.50)+(100*3.25)+(units-500)*3.25 ;
printf("Electricity Bill: Rs %.2f",amount);
}