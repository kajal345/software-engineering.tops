#include<iostream>
using namespace std;
class A
{
public:
void hello()
{
	
	cout<<"hello i m class A"<<endl;
}	
	
};
//  class class name:acessifier class name
class B:public A
{
   public:
   void hello1()
   {
   	
   	cout<<"hello i m class B"<<endl;
	   }	
};
class C:public B
{
	public:
		void c()
		{
			cout<<"hello i m c";
		}
};

int main()
{
	C obj;
	obj.hello();
	obj.hello1();
	obj.c();
	
	return 0;
}
