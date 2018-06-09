#include<stdio.h>
#include<math.h>
#define f(x) ((x*x*x)-(9*x)+1)
#define df(x) ((3*x*x)-9)
int main()
{
	float a,e,b,x;
	printf("\nThe equation is 3^x - 9^x + 1");
	printf("\nEnter the desired accuracy : ");
	scanf("%f",&e);
	printf("\Enter the initial value of x : ");
	scanf("%f",&a);
	printf("\nThe values of x are :\n ");
	do{
		b=a;
		x=a-f(a)/df(a);
		printf("%f\n",x);
		a=x;
	}while(fabs(b-a)>e);
	printf("\nThe root of the equation is : %f",x);
}

