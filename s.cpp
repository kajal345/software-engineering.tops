#include<iostream>
using namespace std;
void demo()
{
	 static int count = 0;
	cout<<"  "<<count<<endl;
	count++;
}
int main()
{
	 for(int i=0;i<=3;i++)
{
	demo();
}
	return 0;
}
