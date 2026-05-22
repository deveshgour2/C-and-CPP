#include<iostream>
using namespace std;
class test
{
	public:
	void show()
	{
		cout<<this<<endl;
		cout<<"this is member function"<<endl;
	}
};
  int main()
  {
  	test t;
  	cout<<&t<<endl;
  	t.show();
  }