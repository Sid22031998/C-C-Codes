#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x)-(5*x)-7)
int main()
{
float a,b,e,x;
printf("\nEnter desired accuracy:");
scanf("%f",&e);
do
{
printf("\nEnter the interval:");
scanf("%f\t%f",&a,&b);
}while(f(a)*f(b)>0);
printf("\nThe value of X.............\n");
do
{
x=a-((b-a)*f(a))/(f(b)-f(a));
if(f(a)*f(x)<0)
b=x;
else
a=x;
printf("%f\n",x);
}while(fabs(b-a)>e);
printf("\nThe Root is:%f",x);
return 0;
}
