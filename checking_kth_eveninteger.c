#include<stdio.h>
void main()
{
	int a,b,c,d[1000],e[1000],f=0;
	printf("enter no.:");
	scanf("%d",&a);
	printf("enter the no. of elements:");
	scanf("%d",&b);
	for(c=0;c<b;c++)
	{
		printf("a[%d]=",c);
		scanf("%d",&d[c]);
	}
	for(c=0;c<b;c++)
	{
		if(d[c]%2==0)
		{
			i++;
		}
	}
	for(c=0;c<b;c++)
	{
		if(d[c]%2==0)
		{
				e[f]=d[c];
				f++;
		}
	}
	printf("%d",e[a-1]);
}
