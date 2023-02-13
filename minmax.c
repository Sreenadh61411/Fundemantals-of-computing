#include<stdio.h>
void main()
{
	int ar[10],i,s,min,max;
	printf("enter the ar.size:");
	scanf("%d",&s);
	printf("enter the elements:");
	for(i=0;i<s;i++)
	{
		scanf("%d",&ar[i]);
	}
	min=max=ar[0];
	for(i=0;i<s;i++)
	{
		if(min>ar[i])
		{
			min=ar[i];
		}
		if(max<ar[i])
		{
			max=ar[i];
		}
	}
		printf("min value is : %d",min);
		printf("\n max value is : %d",max);	
}
