#include<iostream>
using namespace std;

class demo
{
	int a;
	public:
		demo(int data)
		{
			a=data;
		}
		void display()
		{
			cout<<"a= "<<a<<endl;
		}
	
};


int main()
{
	demo obj(65);
	obj.display();
	return 0;
}