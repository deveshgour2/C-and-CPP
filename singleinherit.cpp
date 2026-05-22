#include<iostream>
using namespace std;
class base
{
	int a,b,c;
	public:
	void show()
	{
		b=80;
		a=70;
		c=a+b;
		cout<<c<<endl;
	}
};
   class derived:public base
   {
   	public:
   	void print()
   {
   	int d;
	d=90;
   	cout<<d<<endl;
   }
   };
   int main()
   {
   	derived d;
   	d.print();
   	d.show();
	} 