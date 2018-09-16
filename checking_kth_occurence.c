#include<stdio.h>
void main()
{
	int a,b[10],c,i,j;
	printf("enter an even no. a:");
	scanf("%d",&a);
	printf("enter the no. of elements in the sequence:");
	scanf("%d",&j);
	for(i=0;i<j;i++)
	{
		printf("a[%d]=",i);
		scanf("%d",&b[i]);
	}
	for(i=0;i<=j;i++)
	{
		if(a==b[i])
		{
			printf("your even no. is at:%d",i+1);
			break;
		}
		
	}
	
	
}


