#include<iostream>
using namespace std;
void display();
void display()
{
  class test 
  {
  	 int roll ;
  	 char name[];
  	 public:
  	void get_info()
  	{
  		cout<<"enter the name & roll no"<<endl;
  		cin>>name>>roll;
    }
    void display_info()
    {
    	cout<<name<<endl<<roll;
	}
  };
	test T;
	T.get_info();
	T.display_info();
}
  int main()
  {
  	display();
  }