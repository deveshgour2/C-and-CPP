#include<iostream>
using namespace std;
int main()
{
	int i,sum=0;
	int *p;
	p=new int[5];
	cout<<"enter the elements"<<endl;
	for(i=0;i<=4;i++)
	{
		cin>>p[i];
		sum=sum+p[i];
	}
	cout<<sum;
	delete []p;
}