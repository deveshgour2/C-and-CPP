#include<stdio.h>
#include<stdlib.h>
int fibo(int);

 void main()
 {
   fibo(0);
 }
 
 int fibo(int i)
 {
 	int n,fibo;
 	printf("enter the num\n");
 	scanf("%d",&n);

 	if(i>10)
 	{
 	  return 10;
	 }
	 else 
	 {
	  (fibo(n)=fibo*(n-1)+i); 
	 	printf("%d\n",fibo);	 
     }
     return fibo(i+1);
 }