#include<stdio.h>
#include<math.h>
float func(float x)
{
	return(x*x*x-3*x+1.06);
}
int main()
{
	float a,b,c;
	printf("\nThe Equation is: x^3 - 3^x + 1.06");
	printf("\nEnter the intervals:\n");
	printf("a : ");
	scanf("%f",&a);
	printf("\nb : ");
	scanf("%f",&b);
	if(func(a)*func(b)>=0)
	{
		printf("Wrong values assumed");
		return 0;		
	}
	while((b-a)>0.0001)
	{
		c=(a+b)/2;
		if(func(c)==0.0)
		break;
		else if(func(a)*func(c)<0)
		b=c;
		else if(func(b)*func(c)<0)
		a=c;
	}
	printf("The required root is : %f",c);
}

