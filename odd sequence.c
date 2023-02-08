#include<stdio.h>
void main()
{
	int a,n,i;
	printf("enter the value of n:");
	scanf("%d",&n);
	printf("even numbers sequence are:");
	for(i=1;i<=n;i++)
	{
		if(i%2!=0)
		{
			printf("%d,",i);
		}
	}
	
}
