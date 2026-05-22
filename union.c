#include<stdio.h>
union employee {
	char name[50];
	int id;
	float  salary;
};
void main() 
{
	union employee e= {235};
	printf("%d",e.id);

}
