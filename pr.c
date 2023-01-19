#include<iostream>
using namespace std;

class demo
{
	int a;
	public:
		demo(int b)
		{
			a=b;
		}
		void display()
		{
			cout<<a=" "<<a<<endl;
		}
	
	
};
int main()
{
	demo obj;
	obj.display();
		return 0;
}