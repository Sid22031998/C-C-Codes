//1. Sarrus Method
#include<stdio.h>
int main()
{
int a[3][3];int x=0,y=0,i,j;
printf("Enter the elements in 3*3 matrix:\n");
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
{
printf("Enter data at position %d,%d : ",i+1,j+1);
scanf("%d",&a[i][j]);
}
}
printf("\nThe Matrix is:\n");
for(i=0;i<3;i++) {
for (j = 0; j < 3; j++) {
printf(" %d", a[i][j]);
}
printf("\n");
}
printf("\nValue of determinant is = ");
for(i=0;i<3;i++) {
x = x + a[0][i] * a[1][(i + 1) % 3] * a[2][(i + 2) % 3];
if (i == 0)
printf("(%d+%d+%d)",a[0][i],a[1][(i + 1) % 3],a[2][(i + 2) % 3]);
else
printf("+(%d+%d+%d)",a[0][i],a[1][(i + 1) % 3],a[2][(i + 2) % 3]);
}
for(i=0;i<3;i++) {
y = y + a[2][i] * a[1][(i+1)%3] * a[0][(i+2)%3] ;
printf("-(%d+%d+%d)",a[2][i],a[1][(i+1)%3],a[0][(i+2)%3]);
}
printf(" = %d",(x-y));
return 0;
}
