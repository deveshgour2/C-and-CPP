#include<stdio.h>
int add(int,int);//protype
  
  void main()
  {
  	int d;
  	d=add(40,70);//calling
  {
     printf("%d",d);
  }
}
  int add (int a,int b)//definition
  {
  	int c;
  	c=a+b;
  	return c;
  	
  }