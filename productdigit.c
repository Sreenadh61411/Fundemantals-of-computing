#include<stdio.h>
void main()
{
	int n,digit,prod=1;
	printf("enter the number:");
	scanf("%d",&n);
	while(n>0)
	{
		digit=n%10;
		prod=prod*digit;
		n=n/10;
	}
	printf("sum is : %d",prod);
}
