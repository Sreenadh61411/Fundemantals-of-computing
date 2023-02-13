#include<stdio.h> 
void main()
{
	int ar[10],n,i;
	printf("enter the size of an array:");
	scanf("%d",&n);
	printf("enter the elements:");
	for(i=0;i<n;i++)
	{
	  scanf("%d",&ar[i]);	
	}
	printf("reverse array :");
	for(i=i-1;i>=0;--i)
	{
		printf("%d,",ar[i]);
	}
}
