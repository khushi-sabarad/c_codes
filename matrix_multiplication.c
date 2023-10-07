//matrix multiplication
#include <stdio.h>
void main()
{
int a[5][5],b[5][5],d[5][5],k, r1,r2,c1,c2, i, j;
printf("Matrix 1 order? ");
scanf("%d %d",&r1,&c1);
printf("Matrix 2 order? ");
scanf("%d %d",&r2,&c2);
if(c1==r2)
{
printf("\nMatrix 1 elements?\n");
for (i=0;i<r1;i++)
{
for (j=0;j<c1;j++)
scanf("%d",&a[i][j]);
}
printf("\nMatrix 2 elements?\n");
for (i=0;i<r2;i++)
{
for (j=0;j<c2;j++)
scanf("%d",&b[i][j]);
}
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
{
d[i][j]=0;
for(k=0;k<c1;k++)
d[i][j]=d[i][j]+a[i][k]*b[k][j];
}
}
printf("\nPRODUCT:\n");
for(i=0;i<r1;i++)
{
for(j=0;j<c2;j++)
printf("%d ",d[i][j]);
printf("\n");

}
}
else
printf("Matrices are not compatible \n");
}
