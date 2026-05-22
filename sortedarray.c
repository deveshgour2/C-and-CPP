#include<stdio.h>
void main()
{
	int i,a[100],n,j,temp;
	printf("enter the size of aray\n");
	scanf("%d",&n);
	printf("enter the element of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=0;j<n-1;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("sorted array;-\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}