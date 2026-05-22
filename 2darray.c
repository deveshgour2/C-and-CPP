#include<stdio.h>
void main()
{
	int i,j,a[3][3];
	printf("enter the element of array\n");
		for(i=0;i<=2;i++)
		{
		  for(j=0;j<=2;j++)
		{
			scanf("%d",&a[i][j]);
		}
	    }
	
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
}