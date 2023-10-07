//transpose for square matrix
#include <stdio.h>
int main()
{
int row, col,i, j, value;
printf("\nNumber of rows? ");
scanf("%d", &row);
printf("Number of columns? ");
scanf("%d", &col);
int m[row][col];
int t[col][row];
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
{
printf("Enter value for %d %d: ", i+1,j+1);
scanf("%d", &value);
m[i][j]=value;
}
}
printf("\nMATRIX:\n");
for(i=0;i<row;i++)
{
for(j=0;j<col;j++)
printf("%d ",m[i][j]);
printf("\n");
}
for (i=0;i<row;i++)
{
for(j=0;j<col;j++)
t[i][j]=m[j][i];
}

printf("\nTRANSPOSE:\n");
for(i=0;i<col;i++)
{
for(j=0;j<row;j++)
printf("%d ",t[i][j]);
printf("\n");
}
return 0;
}