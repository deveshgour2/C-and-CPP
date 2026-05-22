#include<stdio.h>
void print(int a[]);
void main()
{
	int a[5];
	print(a);
}

 void print(int a[])
 {
 	int sum=0,i;
 	printf("enter the element of array\n");
 	for(i=0;i<=4;i++)
 	{
 		scanf("%d",&a[i]);
	 }
	 for(i=0;i<=4;i++)
	 sum=sum+a[i];
	 {
	 	printf("%d",sum);
	 }
 }