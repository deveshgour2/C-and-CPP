#include<stdio.h>
typedef struct employee
{
	char name[50];
	int id;
	float salary;
}emp;
  void main()
  {
  	emp e={"ajay",200,2500.36};
  	printf("%s\n%d\n%f",e.name,e.id,e.salary);
  }