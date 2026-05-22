#include<stdio.h>
struct employee
{
    char name[50];
	int id;
	float salary;	
};
void main()
{
	struct employee s1={"akash", 10, 20030.50};
	printf("%s\n%d\n%f\n",s1.name,s1.id,s1.salary);
}