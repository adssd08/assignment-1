#include<stdio.h>
void main()
{
	int a,b,c,d=0,e=1;
	printf("enter no. a:");
	scanf("%d",&a);
	printf("enter no. b:");
	scanf("%d",&b);
	printf("enter no. c:");
	scanf("%d",&c);
	if(a==b || b==c || c==a || a==b==c)
	{
		printf("\n%d",d);
	}
	else
	{
		printf("\n%d",e);
	}
	
	
}
