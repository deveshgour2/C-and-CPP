#include<iostream>
using namespace std;
class test
{
	int a,b,c;
	public:
	void get_value()
	{
		cout<<"enter the value of a"<<endl;
		cin>>a;
		cout<<"enter the value of b"<<endl;
		cin>>b;
	}
	void show()
	{
		c=a+b;
		cout<<c;
	}
};
   int main()
   {
   	 	test t;
   	 	t.get_value();
   	 	t.show();
   }