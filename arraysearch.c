#include<stdio.h>
void main()
{
	int item,i,f=0,n,a[100];
	printf("enter the size of array\n ");
	scanf("%d",&n);
	printf("enter the element of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the item\n");
	scanf("%d",&item);
	
	for(i=0;i<n;i++)
	{
		if(item==a[i])
		{
			f=1;
			break;
		}
	}
	if(f==1)
	{
		printf("item found");
	}
	else
	{
		printf("not found");
	}
}