#include<stdio.h>
int main()
{
	int n,sum=0,numbers,i;
	printf("enter number of elements: ");
	scanf("%d",&n);
	printf("enter numbers: ");
	for(i=0;i<n;i++)
	{
		scanf("%d",&numbers);
		sum=sum+numbers;
	}
	printf("sum of entered numbers is: %d",sum);
}
