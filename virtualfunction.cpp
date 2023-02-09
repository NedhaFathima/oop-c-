#include<iostream>
using namespace std;
class student{
public:
	int rno,m1,m2,tot;
	string name;
	
	student()
	{
		cout<<"enter roll no:"<<endl;
		cin>>rno;
		cout<<"enter name:"<<endl;
		cin>>name;
		cout<<"enter mark 1:"<<endl;
		cin>>m1;
		cout<<"enter mark 2:"<<endl;
		cin>>m2;
	}
	virtual void showdata()
	{
		cout<<"roll number:"<<rno<<endl;
		cout<<"enter name:"<<name<<endl;
		cout<<"enter mark 1:"<<m1<<endl;
		cout<<"enter mark 2:"<<m2<<endl;
		cout<<"total:"<<tot<<endl;
	}
	void compute()
	{
		tot=m1+m2;
	}
};
class minorcourse:public student{
public:
	int min1,min2,min3;
	minorcourse()
	{
		cout<<"enter minor mark 1:"<<endl;
		cin>>min1;
		cout<<"enter minor mark 2:"<<endl;
		cin>>min2;
		cout<<"enter minor mark 3:"<<endl;
		cin>>min3;
	};
	void showdata()
	{
		cout<<"enter minor mark 1:"<<min1<<endl;
		cout<<"enter minor mark 2:"<<min2<<endl;
		cout<<"enter minor mark 3:"<<min3<<endl;
	}
};
int main()
{
	student *ptr;
	minorcourse m;
	ptr=&m;
	ptr->showdata();
}
	

