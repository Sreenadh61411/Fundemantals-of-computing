#include<stdio.h>
int main()
{
	int n,sum=0;
	printf("enter the n value:");
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		printf("%d+",i);
		sum=sum+i;
	}
	printf("\b=%d",sum);
	return 0;
}
