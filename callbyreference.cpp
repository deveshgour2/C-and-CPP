#include<stdio.h>
void show(int *);
int a=20;

int main() 
{
	printf("value of a before call=%d\n",a);
	show(&a);
	printf("value of a after call=%d\n",a);
}

void show(int *a) {
	*a=*a+10;
	printf("value of a in definition=%d\n",*a);
}