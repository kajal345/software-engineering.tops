#include<iostream>
using namespace std;

class A
{
	public:
		void display_a()
		{
			cout<<"display a";
		}
};
class B:public A
{
	public:
		void display_b()
		{
			cout<<"display b";
		}
};
class c:public B
{
	public:
		void display_c()
		{
			cout<<"display c";
		}
};

int main()
{
   c obj;
   obj.display_a();
   obj.display_b();
   obj.display_c();	
	return 0;
}