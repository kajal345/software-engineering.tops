#include<iostream>
using namespace std;

class demo
{
	
	int a;
	public:
		demo(demo &y)
		{
			a=y.a;
		}
};


int main()
{
	demo obj(55);
	demo obj2(obj);
	cout<<obj2.a;
	return 0;
}