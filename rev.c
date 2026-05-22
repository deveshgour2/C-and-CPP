#include<stdio.h>
int main ()
{
	int num,n1,n2,n3,n4,rev;
	printf("enter the number\n");
	scanf("%d",&num);
	n1=num%10;
	num=num/10;
	n2=num%10;
	num=num/10;
	n3=num%10;
	n4=num/10;
	rev=1000*n1+100*n2+10*n3+1*n4;
	printf("%d",rev);
	return 0;
}