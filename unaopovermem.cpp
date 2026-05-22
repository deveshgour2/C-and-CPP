#include<iostream>
using namespace std;
class test
{
	int a;
	public:
	void get_value()
	{
		cout<<"enter the value of a"<<endl;
		cin>>a;
	}
	void show()
	{
		cout<<a;
	}
	void operator ++()
	{
		++a;
	}
};
   int main()
   {
   	 test t;
   	 t.get_value();
   	 ++t;
   	 t.show();
   }
