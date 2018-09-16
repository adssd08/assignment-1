#include<stdio.h>
void main()
{
	int a,b,c,d;
	printf("An IPV4 adress contains 4 parts");
	printf("\nexample: 123.456.789.012");
	printf("\nas in the upper example \n1st part is:123 \n2nd part is:456 \n3rd part is:789 \n4th part is:012");
	printf("\nnow you enter 1st part of IPV4 for checking:");
	scanf("%d",&a);
	printf("enter 2nd part:");
	scanf("%d",&b);
	printf("enter 3rd part:");
	scanf("%d",&c);
	printf("enter 4th part:");
	scanf("%d",&d);
	if(a>=0 && b>=0 && c>=0 && d>=0 && a<=255 && b<=255 && c<=255 && d<=255) 
	{
		printf("\nThis means %d.%d.%d.%d is a valid IPV4",a,b,c,d);
	}
	else
	{
		printf("%d.%d.%d.%d is not a valid IPV4",a,b,c,d);
	}
}
