#include<iostream>
using namespace std;
class demo
{
	int a,b;
	public:
	void show(int a,int b)
	{
	    this->a=a;
	    this->b=b;
	}
	void print()
	{
	cout<<this->a<<endl<<this->b<<endl;
    }
};
  int main()
  {
  	demo d;
  	d.show(10,20);
  	d.print();
  }