#include<stdio.h>
#include<stdlib.h>
void add();
void sub();
void multi();
void divi();

 void main()
 {
 	int choice;
 	int ch;
 	do
 	{
	 printf("1 for add\n");
	 printf("2 for sub\n");
	 printf("3 for multi\n");
	 printf("4 for div\n");
	 printf("5 for exit\n");
 	printf("enter your choice\n");
 	scanf("%d",&choice);
 	
    switch(choice)
    {
	   case 1: add();
	   break;
	   case 2: sub();
	   break;
	   case 3: multi();
	   break;
	   case 4: divi();
	   break;
	   case 5: exit(1);
	   default:
	      printf("invalid choice\n");
	}
	  printf("do u want to continue to press y/Y\n");
	  scanf("%s",&ch);
    }while(ch=='y'||ch=='Y');
}
    void add()
    {
    	int a,b,c;
    	printf("enter the value of a&b\n");
    	scanf("%d%d",&a,&b);
    	c=a+b;
    	printf("%d",c);
	}
	
	void sub()
    {
    	int a,b,c;
    	printf("enter the value of a&b\n");
    	scanf("%d%d",&a,&b);
    	c=a-b;
    	printf("%d",c);
	}
	
	void multi()
    {
    	int a,b,c;
    	printf("enter the value of a&b\n");
    	scanf("%d%d",&a,&b);
    	c=a*b;
    	printf("%d",c);
	}
	
	void divi()
    {
    	int a,b,c;
    	printf("enter the value of a&b\n");
    	scanf("%d%d",&a,&b);
    	c=a/b;
    	printf("%d",c);
	}