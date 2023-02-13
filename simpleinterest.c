#include<stdio.h>
void main()
{
	float p,r,t,si;
	printf("enter the principal amount:");
	scanf("%f",&p);
	printf("enter the rate of interest:");
	scanf("%f",&r);
	printf("enter the time :");
	scanf("%f",&t);
	si=(p*r*t)/100;
	printf("simple interest is :%f",si);
	
}
