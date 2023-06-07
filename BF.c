#include<stdio.h>
#include<stdlib.h>
float f(float x)
{
	return (x*x-5);
}

void main()
{
	float a, b, e, x;
	printf("Enter the value of a: ");
	scanf("%f", &a);
	printf("Enter the value of b: ");
	scanf("%f", &b);
	printf("Enter the value of e: ");
	scanf("%f", &e);
	do
	{
		if(f(a)*f(b) < 0)
			x = (a+b)/2.0;
		else
			break;
		if(f(a)*f(x) < 0)
			b = x;
		else
			a = x;
	}while(fabs(a-b) <= e);
	printf("The value of x: %f", x);
}

