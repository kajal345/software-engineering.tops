#include<iostream>
using namespace std;

class mom
{
	
	protected:
		int get_money_mom;
		public:
			void getmoney()
			{
				cout<<"enter the money get from mom";
				cin>>get_money_mom;
			}
			void display()
			{
				cout<<"get money from mom is =   "<<get_money_mom<<endl;
			}
};
class dad
{
	protected:
		int get_money_dad;
		public:
			void getmoneydad()
			{
				cout<<"enter the money";
				cin>>get_money_dad;
			}
			void display1()
			{
				cout<<"get money dad is=  "<<get_money_dad<<endl;
			}
};
			
class child:public mom,public dad
{

		 int my_money;
		 public:
		 void mymoney()
		 {
		    my_money=get_money_dad+get_money_mom;
		    cout<<"Total money is=  "<<my_money<<endl;
		 }
};





int main()
{
	child obj;
	obj.getmoney();
	obj.getmoneydad();
	obj.display();
	obj.display1();
	obj.mymoney();
	
	return 0;
}