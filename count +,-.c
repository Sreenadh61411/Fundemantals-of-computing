#include<stdio.h>
void main()
{
	int ar[10],i,s;
	printf("enter the ar.size:");
	scanf("%d",&s);
	printf("enter the elements:");
	for(i=0;i<s;i++)
	{
		scanf("%d",&ar[i]);
	}
	printf("positive are:");
	for(i=0;i<s;i++)
	{
	if(ar[i]>0)
	{
		printf("%d ",ar[i]);
	}
   }
 	printf("\n negative values are:");  
   for(i=0;i<s;i++)
   if(ar[i]<0)
	{
	    printf("%d",ar[i]);
    }
}
