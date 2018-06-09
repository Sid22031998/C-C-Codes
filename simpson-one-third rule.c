#include<stdio.h>
#include<math.h>
float f(float x)
{
return ((x*x*x));
}
int main()
{
float a,b,c,sum=0,h;
int i,n,j=1,k=0;
printf("\nEnter the lower and upper limit: ");
scanf("%f%f",&a,&b);
printf("\nEnter the number of interval: ");
scanf("%d",&n);
h=(b-a)/n;
sum = sum + f(a);
printf("-----------------------------------\n");
printf("Iteration\tX\tf(X)\n");
printf("-----------------------------------\n");
for(i=1;i<n;i++)
{
c=a+h;
if(k==0)
{
sum = sum + 4*f(c);
k=1;
}
else
{
sum = sum + 2*f(c);
k=0;
}
printf("%d\t%f\t%f\n",j++,c,f(c));
a=c;
}
printf("%d\t%f\t%f\n",j++,b,f(b));
sum = sum + f(b);
sum = sum * (h/3);
printf("\n\nThe value of integral is= %f ",sum);
return 0;
}
