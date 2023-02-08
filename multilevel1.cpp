#include<iostream>
using namespace std;


class A
{
	
	public:
		void display_a()
		{
			cout<<"this is A"<<endl;
		}
};
class B:public A
{
	public:
		
		void display_b()
		{
			cout<<"this is B"<<endl;
		}
	
};
class C:public B
{
	public:
		void display_c()
		{
			cout<<"this is c"<<endl;
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