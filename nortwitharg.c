#include<stdio.h>
void add(int a,int b);

  void main()
  {
  	int a,b;
  	add( a, b);
  }
  
  void add(int a,int b)
  {
  	int c;
  	a=89; b=62;
  	c=a+b;
  	printf("%d",c);
  	return c;
  }