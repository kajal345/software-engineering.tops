#include<iostream>
using namespace std;

class student
{
	public:
	string name;
	int marks;
	
	void hello()
	{
		cout<<"hello\n";
	}
};

int main()
{
	
student obj1;
obj1.name="kajal";
obj1.marks=45;
obj1.hello();
  cout << obj1.name<< " " << obj1.marks<<endl;
	return 0;
}