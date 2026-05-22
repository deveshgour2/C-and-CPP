#include<iostream>
using namespace std;
int add(int);
int add(int,int);
int add(int,float,int);
int add(int x)
{
	return x+x;
}
 int add (int x,int y)
 {
 	return x*y;
 }
 int add(int x,float y,int z)
 {
 	return x+y+z;
 }
   int main()
   {
   	 cout<<add(4)<<endl;
   	 cout<<add(6,7)<<endl;
   	 cout<<add(8,6,3)<<endl;
   }