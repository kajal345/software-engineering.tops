#include<iostream>
using namespace std;

class A
{
	
	public:
		void display_a()
		{
			cout<<"class A";
		}
};

class B
{
	
	public:
		void display_b()
		{
			cout<<"class B";
		}
};
class C:public A,public B
{
	public:
		void display_c()
		{
			cout<<"class c";
		}
};


int main()
{
   	C obj;
   	obj.display_a();
   	obj.display_b();
   	obj.display_c();
	return 0;
}