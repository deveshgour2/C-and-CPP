#include<stdio.h>
struct employee
{
	char name[20];
	int id;
	float salary;
};
void main()
{
	struct employee s1[20];
	int i;
	for(i=0;i<=2;i++)
	{
	    printf("enetr the name,id & salary of employee\n");
	    scanf("%s%d%f",s1[i].name,&s1[i].id,&s1[i].salary);
	}
	for (i=0;i<=2;i++)
	{
		printf("%s\n%d\n%f\n",s1[i].name,s1[i].id,s1[i].salary);
	}
}