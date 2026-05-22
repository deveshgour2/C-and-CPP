#include<iostream>
using namespace std;
int main()
{
	int a=10;
	int &b=a;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	b=20;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
	a=30;
	cout<<"a="<<a<<endl<<"b="<<b<<endl;
}