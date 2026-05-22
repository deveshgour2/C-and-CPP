#include<stdio.h>
void print(int a[],int size);
void main()
{
	int a[5]={10,20,30,40,50,};
	int size=5;
	print(a,size);
}
  void print(int a[], int size)
  {
  	int i;
  	for(i=0;i<size;i++)
  	{
  		printf("%d ",a[i]);
	}
  }