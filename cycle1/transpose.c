#include<stdio.h>

int main()
{
int a[10][10],i,j,r,c;
printf("enter the order of matrix:\n");
scanf("%d%d",&r,&c);
printf("enter values to matrix:\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("matrix is :\n");
for(i=0;i<r;i++)
{
for(j=0;j<c;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("transpose of matrix is:\n");
for(i=0;i<c;i++)
{
for(j=0;j<r;j++)
{
printf("%d\t",a[j][i]);
}
printf("\n");
}
return 0;
}
