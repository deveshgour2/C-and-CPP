#include<stdio.h>
void main()
{
	int max,min,i,j,n,a[100];
	printf("enyer the size of array\n");
	scanf("%d",&n);
	printf("enter the elemnt of array\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	min=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
		{
			max=a[i];
		}
		if(a[i]<min)
		{
			min=a[i];
		}
    }
		printf("maximun=%d",max);
		printf("minimum=%d",min);
		
	
}