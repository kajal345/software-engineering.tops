#include<iostream>
using namespace std;


class A
{
	public:
		void A1(){
			cout<<"hello i m common class"<<endl;
		}
};
class B:public A
{
	public:
		void B1()
		{
			cout<<"hello i m class B"<<endl;
		}
};
class c:public A
{
  public:
  void c1()
  {
  	cout<<"hello i m class c"<<endl;
	  }	
};
int main()
{
   B obj;
   obj.A1();
   c obj;
   obj.c1();	
	
	return 0;
}
