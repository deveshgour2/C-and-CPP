#include<stdio.h>
#include<stdlib.h>
void main()
{
	int ptr,i,sum=0;
	ptr=((int*)malloc (5*sizeof(int)));
	if(ptr==NULL)
	{
		printf("memory is not created");
		exit(1);
	}
	for(i=0;i<=4;i++)
	{
		sum=sum+(ptr+i);
    }
	printf("%d",sum);
	free(ptr);
}