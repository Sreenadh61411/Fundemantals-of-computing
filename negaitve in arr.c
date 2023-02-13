#include<stdio.h> 
void main()
{
	int ar1[10],s1,i,count=0;
	printf("enter the size of an array:");
	scanf("%d",&s1);
	printf("enter the elements of an array:");
	for(i=0;i<s1;i++)
	{
		scanf("%d",&ar1[i]);
	}
	printf("negative numbers are:\n");
	for(i=0;i<s1;i++)
	{
	if(ar1[i]<=0)
	{
		printf("%d,",ar1[i]);
	}
  }

}
