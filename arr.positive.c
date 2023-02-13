 #include<stdio.h>
 void main()
 {
 	int s,a[10],i; 
 	printf("enter the arraysize:");
 	scanf("%d",&s);
 	printf("enter elements:");
 	for(i=0;i<s;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 printf("positive values are:");
	 for(i=0;i<s;i++)
	 {
	 if(a[i]>=0)
	 {
	 	printf("%d,",a[i]);
	 }
    }
 }
