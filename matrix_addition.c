//addition of two matrices
#include <stdio.h>
void main()
{
 int r1,r2,c1,c2,i,j;
 printf("Enter the order of Matrix 1: ");
 scanf("%d %d", &r1,&c1);
 int a[r1][c1];
 printf("Enter the order of Matrix 2: ");
 scanf("%d %d", &r2,&c2);
 int b[r2][c2];
 int s[r1][c1];
 if((r1==r2)&&(c1==c2))
 {
  printf("\nEnter Matrix 1 elements: \n");
  for (i=0;i<r1;i++)
  {
   for (j=0;j<c1;j++)
    scanf("%d",&a[i][j]);
  }
  printf("\nEnter Matrix 2 elements: \n");
  for (i=0;i<r2;i++)
  {
    for (j=0;j<c2;j++)
     scanf("%d",&b[i][j]);
  }
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c2;j++)
   {
    s[i][j]=0;
    s[i][j]=a[i][j]+b[i][j];
   }
  }
  printf("\nSUM OF THE TWO MATRICES: \n");
  for(i=0;i<r1;i++)
  {
   for(j=0;j<c2;j++)
    printf("%d ",s[i][j]);
   printf("\n");
  }
 }
 else
  printf("Matrices are not compatible \n");
}
