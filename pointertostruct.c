#include<stdio.h>
struct employee
{
   char name[50];
   int id;
   float salary;	
};
  void main()
  {
  	struct employee *s1,s2;
  	s1=&s2;
  	printf("enter the name,id & salary of employee\n");
  	scanf("%s%d%f",s2.name,&s2.id,&s2.salary);
  	printf("%s\n%d\n%f\n",s1->name,s1->id,s1->salary);
  }