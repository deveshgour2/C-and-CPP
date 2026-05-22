#include<iostream>
using namespace std;
class base
{
	int a;
	protected:
	int b;
	public:
	int c;
};
  class derived:public base
  {
  	public:
  	void show()
  	{
  	  b=40;
	  c=90;	
	  cout<<b<<c;
	}
  };
  int main()
  {
  	derived d;
  	d.show();
  }
