#include<stdio.h>
int show(int);

 void main()
 {
 	int table,num;
 	printf("enter the num\n");
 	scanf("%d",&num);
 	printf("%d",show(num));
 }
 
 int show(num)
 {
 	int table,tableno;
 	if(num==10)
 	{
 		return 10;
	 }
	else
    {
     printf("%d\n",num);	
	}
	return show(num+1);
	printf("enter the table no");
	scanf("%d",&tableno);
	table=tableno*num;
	printf("%d\n",table);
 }