#include<iostream>
#include<string>
using namespace std;

class myclass
{
	public:
		int a;
		string str;
};
int main()
{
	myclass obj; //create a object of my class
	obj.a=10;
	obj.str="hello";
	cout<<obj.a;
	cout<<obj.str;
	return 0;
}