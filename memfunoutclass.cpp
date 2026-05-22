#include<iostream>
using namespace std;
class test
{
	int a,b,c;
	public:
	void get_value();
	void show();
};
   void test::get_value()
   {
   	 cout<<"enter the value of a,b"<<endl;
   	 cin>>a>>b;
   }
   void test::show()
   {
   	c=a+b;
   	cout<<c;
   }
   int main()
   {
   	 test t;
   	 t.get_value();
   	 t.show();
   }