#include<stdio.h>
int fact(int a)
{
	if(a>=1)
	return (a*fact(a-1));
	else
	return 1;
}
int main()
{
	int n,a;
	printf("Enter the no: \n");
	scanf("%d",&n);
	a=fact(n);
	printf("\nFactorial of %d is %d",n,a);
}
