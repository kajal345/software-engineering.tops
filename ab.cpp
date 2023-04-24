#include<iostream>
using namespace std;

class demo
{
	int id;
	string name;
	
	public:
		void getdata()
		{
			cout<<"enter the id"<<endl;
			cin>>id;
			cout<<"enter the name"<<endl;
			cin>>name;
		  
		}
		void setdata()
		{
			cout<<"id is \n"<<id<<"name is "<<name<<endl;
			
		}
	
};

int main()
{
	
	demo obj;
	obj.getdata();
	obj.setdata();
	return 0;
}
