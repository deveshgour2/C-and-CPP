#include<iostream>
using namespace std;
class student
{
	string name;
	int roll;
	public:
	class course
    {
       string course_name;
	   public:
	   void get_info()
	   {
	      cout<<"enter the name of course"<<endl;
		  cin>>course_name;   	
	   }	
	   void show_info()
	   {
	   	 cout<<course_name;
	   }
    };
	   void display()
	   {
	   	 cout<<"enter the name& roll no"<<endl;
	   	 cin>>name>>roll;
	   }
	   void show()
	   {
	   	 cout<<name<<endl<<roll<<endl;
	   }
};
  int main()
  {
  	student S;
  	student::course C;
  	S.display();
  	C.get_info();
  	S.show();
  	C.show_info();
  }