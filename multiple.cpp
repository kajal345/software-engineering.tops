#include<iostream>
using namespace std;

class A
{
   public:
   void A1()
   {
      cout<<"hello i m A"|<<endl;	
	   }	
	
};
class B
{
	public:
	
	void B1()
	{
		cout<<"hello i m B"<<endl;
	}
	
	
};
class C:public A,public B
{
	public:
	void c1()
	{
		cout<<"hello i m c"<<endl;
	}
};
int main()
{
	
	C obj;
	obj.A1();
	obj.B1();
	obj.c1();
	return 0;
}
