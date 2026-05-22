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
		cout<<"a="<<a;
	}
	void operator +(test);
};
  void test :: operator +(test t)
  {
  	a= a+ t.a;
  }
  int main()
  {
  	test t,t1;
  	t.get_value();
	t1.get_value();
	t+t1;
	t.show();   
  }