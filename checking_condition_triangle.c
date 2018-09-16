#include<stdio.h>
void main()
{
	int a,b,c,d=0,e=1;
	printf("enter  no. a:");
	scanf("%d",&a);
	printf("enter no. b:");
	scanf("%d",&b);
	printf("enter no. c:");
	scanf("%d",&c);
	if(a+b>c && a+c>b && b+c>a)
	{
		printf("%d",e);
		//this means that these three no.s can form triangle
	}
	else
	{
		printf("%d",d);
		//this means that these three no.s can't form triangle
	}
}
